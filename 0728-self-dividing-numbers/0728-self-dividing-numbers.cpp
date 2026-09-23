class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
    
        for(int i =left; i<=right; i++){
            bool valid = true;
            int temp = i;
        
            while(temp > 0){
                int digit = temp %10;
                if(digit ==0 || i % digit !=0){
                    valid = false;
                    break;
                }
                temp = temp / 10;
            }
        if(valid){
            ans.push_back(i);
            }
        }
        
        return ans;
    }
};