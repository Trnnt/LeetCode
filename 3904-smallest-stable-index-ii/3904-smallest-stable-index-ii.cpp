class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>suffix(n); //create a vector with n spaces/elements.

        suffix[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            suffix[i] = min(nums[i], suffix[i+1]); // suffix ={0,0,1,4}
        }
        int mx = nums[0];
        for(int i=0; i<n; i++){
            mx = max(mx, nums[i]);
            int st = mx - suffix[i];
            if(st <= k)return i;
        }
        return -1;
    }
};