class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>mp;
        unordered_map<char, int>mt;
        for(char ch:ransomNote) mp[ch]++;
        for(char ch:magazine) mt[ch]++;
        for(auto it:mp){
            if(it.second > mt[it.first])return false;
        }
        return true;
    }
};