class Solution {
public:

    bool checkVowel(char ch){
        vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        for(int i = 0; i< vowels.size(); i++){
            if(ch == vowels[i])
                return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;

        while(start < end){
            //run until a vowel is found from the start
            while(start < end && !checkVowel(s[start])){
                start ++;
            }
            //run until a vowel is found from the end
            while(start < end && !checkVowel(s[end])){
                end --;
            }

            //we hav the position of our vowels
            //swap time
            if(start < end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
    return s;
    }
};