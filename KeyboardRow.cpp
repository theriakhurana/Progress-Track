class Solution {
public:
    bool check(string word, string row){
        
        for(int i = 0; i< word.length(); i++){
            int flag = 0;
            for(int j = 0; j < row.length(); j++){
                if(word[i] == row[j]){
                    flag = 1;
                }
            }
            
            if(flag == 0){
                return false;
            }
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
        //create a copy and convert all strings to lowercase
        vector<string> copy = words;
        for(string &str : copy){
            transform(str.begin(), str.end(), str.begin(), ::tolower);
        }
        
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> result = {};

        for(int i = 0; i< copy.size(); i++){
            if(check(copy[i] , row1)){
                result.push_back(words[i]);
            }
            else if(check(copy[i] , row2)){
                result.push_back(words[i]);
            }
            else if(check(copy[i] , row3)){
                result.push_back(words[i]);
            }
            else
                continue;
        }
        return result;
    }
};