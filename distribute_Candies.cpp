class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(), candyType.end());

        int max = candyType.size()/2;
        int count = 1; //count for different type of candies
        for(int i = 1; i< candyType.size(); i++){
            if(count == max){
                return count;
            }
            if(candyType[i] != candyType[i-1]){
                count++;
            }
        }
        return count;
    }
};