class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //optimised approach:
        int n = nums.size();
        int expectedsum = (n*(n+1))/2;
        int sum = 0;

        for(int i = 0; i<n; i++){
            sum+=nums[i];
        }
        return expectedsum - sum;

        //brute force approach:

        // sort(nums.begin(), nums.end());
        // int val = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] != val){
        //         return val;
        //     }
        //     val++;
        // }
        // return nums.size();
    }
};
