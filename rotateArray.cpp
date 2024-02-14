class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // 1,2,3,4,5,6,7
        int n = nums.size();
        k = k % n; // handle cases with k > n

        int s = 0;
        int e = n-1;

        //reverse whole array 
        // 7,6,5,4,3,2,1
        while(s < e){
            swap(nums[s], nums[e]);
            s ++;
            e --;
        }

        //reverse first k elements
        // 5,6,7,4,3,2,1
        s = 0;
        e = k -1;
        while(s < e){
            swap(nums[s], nums[e]);
            s ++;
            e --;
        }

        //swap remaining elements
        // 5,6,7,1,2,3,4
        s = k;
        e = n - 1;
        while(s < e){
            swap(nums[s], nums[e]);
            s ++;
            e --;
        }

        // Using reverse function:
        
        // Reverse the entire array
        //reverse(nums.begin(), nums.end());

        // Reverse the first k elements
        //reverse(nums.begin(), nums.begin() + k);

        // Reverse the remaining elements
        //reverse(nums.begin() + k, nums.end());
    }
};
