class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pointerIndex = nums.size() -1; // last element
        //track the position of last non zero element

        //for cases like [1,0,3,7,0,0]
        while(nums[pointerIndex] == 0){
            if(pointerIndex == 0){
            return;
            }
            pointerIndex--;
        }

        for(int i = pointerIndex ;i >= 0 ; i--){
            if(nums[i] == 0){
                for(int j = i + 1; j <= pointerIndex; j++){
                    swap(nums[j],nums[j-1]);
                }
                pointerIndex --;
            }
        }
    }
};