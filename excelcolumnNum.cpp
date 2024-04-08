class Solution {
public:
    int titleToNumber(string columnTitle) {
        int position = 1;
        int value = 0;

        int len = columnTitle.size();
        for(int i = 0; i < len; i++){
            position = int(columnTitle[i]) - 64;
            value = value* 26 + position;           
        }
        return value;
    }
};

//value += position * pow(26,i);
//position = int(columnTitle[i]) - 64;
//value+=position;