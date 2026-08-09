class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>mp;
        unordered_map<char, int>mt;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch: t){
            mt[ch]++;
        }
        if(s.size() != t.size()) return false;
        for(auto it:mp){
            if(it.second != mt[it.first])return false;
        }
        return true;
    }
        
};