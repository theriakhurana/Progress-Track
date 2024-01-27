class Solution {
public:
    bool isPalindrome(int x) {
        long sum = 0;
        int temp = x;
        while(x>0){
            int rem = x%10;
            x = x/10;
            sum = (sum*10) + rem;
            
        }
        if(sum == temp){
            return true;
        }
        return false;
    }
};