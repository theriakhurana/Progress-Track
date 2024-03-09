class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26]={0};

        //count occurences of chars in magazine
        for(int i = 0; i< magazine.size(); i++){
            int idx = (int)magazine[i];
            count[idx - 97]++;
        }

        //reduce the occurences of chars in ransomNote
        for(int i = 0; i< ransomNote.size(); i++){
            int cnt = (int)ransomNote[i];
            count[cnt - 97]--;
        }
        // if any value goes in negative.. return false;
        for(int i = 0; i< 26; i++){
            if(count[i] < 0){
                return false;
            }
        }
        return true;
    }
};