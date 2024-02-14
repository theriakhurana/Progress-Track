class Solution {
public:
    int lengthOfLastWord(string s) {
        //check for whitespaces at d end
        int spacecount = 0;
        int len = s.length();

        for(int i = len -1; i>=0; i--){
            if(s[i] != ' '){
                break;
            }
            spacecount++;
        }
        int count = 0; // count for length of word
        for(int i = len - 1 - spacecount; i>=0; i--){
            if(s[i] == ' '){
                break;
            }
            count++;
        }

        return count;
    }
};
