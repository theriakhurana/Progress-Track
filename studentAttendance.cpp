class Solution {
public:
    bool checkRecord(string s) {
        int countofA = 0;
        int countofconsecutiveL = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A'){
                countofA++;
                // if count becomes 2.. we return false
                if(countofA > 1){
                    return false;
                }
            }
            if(s[i] == 'L'){
                countofconsecutiveL = 1;
                // we basically want 3L to retrun false
                for(int count = 1; count < 3; count++){
                    if(s[i+count] != 'L'){
                        break;
                    }
                    countofconsecutiveL++;
                }
                if(countofconsecutiveL >= 3){ 
                    return false;
                }
            }
        }
        return true;
    }
};