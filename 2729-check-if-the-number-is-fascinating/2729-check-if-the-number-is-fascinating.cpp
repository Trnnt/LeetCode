class Solution {
public:
    bool isFascinating(int n) {
        long long ans = stoll(to_string(n) + to_string(2*n) + to_string(3*n));
        int freq[10] = {0};
        while(ans > 0){
            int digit = ans % 10;
            ans = ans /10;

            freq[digit]++;
        }
        if(freq[0] > 0){
            return false;
        }
        for(int i=1; i<=9;i++){
            if(freq[i] != 1){
                return false;
            }
        }
        
        return true;
    }
};