class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3){
            return false;
        }

        int peak = -1;
        int idx = -1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > peak){
                peak = arr[i]; 
                idx = i; // index of peak
            }
        }
        //if peak comes at the edge 
        if(idx == 0 || idx == arr.size()-1){
            return false;
        }

        // check for strictly increasing (before peak)
        for(int i = 1; i <= idx ;i++){
            if(arr[i] <= arr[i-1]){
                return false;
            }
        }

        // check for strictly decreasing (after peak)
        for(int i = idx + 1; i< arr.size(); i++){
            if(arr[i] >= arr[i-1]){
                return false;
            }
        }
        return true;
    }
};