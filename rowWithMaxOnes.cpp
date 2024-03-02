class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int present_count = 0;
        int max_count = 0;
        int index = 0;

        for(int row = 0; row < mat.size(); row++){
            present_count = 0;
            for(int col = 0; col < mat[row].size(); col++){
                if(mat[row][col] == 1){
                    present_count++;
                }
            }
            if(present_count > max_count){
                max_count = present_count;
                index = row;
            }
        }

        vector<int> result = {index, max_count};
        return result;
    }
};