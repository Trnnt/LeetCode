class Solution {
public:
    int countCommas(int n) {
        if(n>=1000){
            return (n-1000)+1;
        }else if(n< 999){
            return 0;
        }
        return {};
    }
};