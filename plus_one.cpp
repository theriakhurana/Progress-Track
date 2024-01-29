class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        //start rightmost element
        for(int i = n-1; i>=0; i--){
            //digit not 9, increment and return
            if(digits[i] != 9){
                digits[i]++;
                return digits;
            }
            //if digit 9, set it to 0 n continue to next digit
            digits[i] = 0;
        }
        //if all digits were 9, insert 1 at the beginning
        digits.insert(digits.begin(),1);
        return digits;
    }
};