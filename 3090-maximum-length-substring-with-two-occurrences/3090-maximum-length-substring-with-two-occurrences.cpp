class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans =0;
        int left=0;
        int right = 0;
        unordered_map<char, int>mp;
        while(right < s.size()){
            mp[s[right]]++;

            while(mp[s[right]] > 2){
                mp[s[left]]--;
                left++;
            }
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};