class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int>mp;
        unordered_map<int, int>mt;
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }
        for(int j=0; j<nums2.size(); j++){
        mt[nums2[j]]++;
        }
        for(auto it:mp){
            if(mt.find(it.first) != mt.end()){
                ans.push_back(it.first) ;
            }
        }
        return ans;
    }
};