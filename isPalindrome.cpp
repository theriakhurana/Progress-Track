class Solution {
public:
    bool isPalindrome(string s) {
    //Step 1: convert to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //Step 2: remove non alphanumeric chars from the string
    string actual ="";
    for(char ch : s){
        if(isalnum(ch)){
            actual.push_back(ch);
        }
    }

    //Step 3: Reverse the string
    string reversed= "";
    int n = actual.length();
    for(int i = n - 1; i>=0; i--){
        reversed.push_back(actual[i]);
    }

    //Step 4: Compare the two strings
    if(actual == reversed){
        return true;
    }

    return false;
        
    }
};