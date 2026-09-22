class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1){
            return false;
        }
        int sum=1; 
        int i=2;
        while(i * i <= num){
            if(num % i==0){
                sum += i;
               if(i != num/i){
                sum += num/i;
               }
            }
            i++;
        }
        if(sum == num){
            return true;
        }
        else{
            return false;
        }
    }
};