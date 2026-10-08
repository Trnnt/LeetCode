class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>st;
        int left=0;
        for(int i=0; i<nums.size(); i++){
            if(st.count(nums[i])){
                return true;
            }
            st.insert(nums[i]);
            if(i-left >= k){
                st.erase(nums[left]);
                left++;
            }
        }
        return false;
    }
};