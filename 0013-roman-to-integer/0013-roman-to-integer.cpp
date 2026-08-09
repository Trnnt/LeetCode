class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map<char, int>mp={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for(int i =0; i<s.size(); i++){
            int curr = mp[s[i]];
            if(i+1 <s.size() && curr < mp[s[i+1]]){
                ans -= curr;
            }else{
                ans+= curr;
            }
        }
        return ans;
    }
};