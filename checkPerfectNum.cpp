class Solution {
public:
    bool checkPerfectNumber(int num) {
        //int sum = 1; //every num is divisible by 1
        //what if num == 1 ?

        //int sum = 0;
        // for(int i = 1; i < num; i++){
        //     if(num % i == 0){
        //         sum += i;
        //     }
        // }

        if(num == 1){
            return false;
        }
        int sum = 1;
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                sum += i + num/i;
            }
        }

        return sum == num;
    }
};
