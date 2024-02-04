class Solution {
public:
    int strStr(string haystack, string needle) {

        for(int i = 0; i< haystack.length(); i++){
            int index = i;
            if(haystack[i] == needle[0]){
                for(int j = 1; j < needle.length(); j++){
                    if(haystack[i+j] != needle[j]){
                        index = -1;
                        break;
                    }
                }
                if(index != -1){
                    return index;
                }
            }
        }
        return -1;
        // int index= haystack.find(needle,0);
        // if(index != -1){
        //     return index;
        // }
        // else{
        //     return -1;
        // }
    }
};