class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentfreq = 0;
        int maxfreq = 0;

        for(int i = 0; i< nums.size(); i++){
            if(nums[i] == 1){
                currentfreq++;
            }
            else{ // if 0 comes
                if(currentfreq > maxfreq){
                    maxfreq = currentfreq;
                }
                currentfreq = 0;//set to 0
            }
        }

        // for test cases like example 1..
        if(currentfreq > maxfreq){
            return currentfreq;
        }
        return maxfreq;

    }
};