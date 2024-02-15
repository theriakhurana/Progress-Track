class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums){
            result = result ^ num;
        }

        return result;
    }
};
// bitwise xor approach
// example:
//{4,2,5,2,5}
//do operations in bits
// 0 ^ 4 = 4
// 4 ^ 2 = 6
// 6 ^ 5 = 3
// 3 ^ 2 = 4
// therefore result = 4 which occurs once.