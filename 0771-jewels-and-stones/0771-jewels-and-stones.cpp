class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans=0;
        unordered_map<char, int>mp;
        unordered_map<char, int>mt;
        for(int i=0; i<jewels.size(); i++){
            mp[jewels[i]]++;
        }
        for(int j=0; j<stones.size(); j++){
            if(mp.find(stones[j]) != mp.end())
            ans++;
        }
        return ans;
    }
};