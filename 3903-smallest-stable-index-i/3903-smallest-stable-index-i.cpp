class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        // int ans=0;
        for(int i=0; i<nums.size(); i++){
            int mx = nums[i];
            int mn = nums[i];

            for(int j=0; j<=i; j++){
                mx = max(mx , nums[j]);
            }
            for(int j=i; j<nums.size(); j++){
                mn = min(mn, nums[j]);
            }
            int inst = mx-mn;
            if(inst <=k)
            return i;
        }
        return -1;
    }
};