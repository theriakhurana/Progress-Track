class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() -1;
        int mid;

        if(target > nums[e]){
            return e+1;
        }
        else if(target < nums[0]){
            return 0;
        }
        else{
            while(s <= e){
                mid  = (s + (e-s)/2);

                if(nums[mid] == target){
                    return mid;
                }

                else if(nums[mid] < target){
                    s = mid + 1;
                }
                else{
                    e = mid - 1;
                }
            }
        }
        if(target > nums[e]){
            return e+1;
        }
        else{
            return e;
        }
    }
};
