class Solution {
public:

string longestCommonPrefix(vector<string> &strs) {
            
    //strs = ["flower","flow","flight"]
    sort(strs.begin(),strs.end()); // ["flight","flower","flow"]

    int n = strs.size();
    string first = strs[0]; //flight
    string last = strs[n - 1]; //flow

    string arr = "";

    for(int i = 0; i < min(first.size(),last.size()); i++){
        
        if(first[i] != last[i]){
            break;
        }
        arr += first[i];
    }

    return arr;
    
     }
};
