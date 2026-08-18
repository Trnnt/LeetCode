class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i=0; i<k; i++){
            int maxFreq=0;
            int maxElement=0;
            for(auto it:mp){
                if(it.second > maxFreq){
                    maxFreq = it.second;
                    maxElement = it.first;
                }
            }
            ans.push_back(maxElement);
            mp.erase(maxElement);
        }
        return ans;

    }
};