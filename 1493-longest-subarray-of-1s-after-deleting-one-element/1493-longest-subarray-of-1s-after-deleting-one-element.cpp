class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0;
        int zero=0;
        int ans=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i] == 0){
                zero++;
            }
            while(zero > 1){
                if(nums[left] == 0){
                    zero--;
                    
                }
                left++;
            }
            ans = max(ans, i-left+1-1);
        }
        return ans;
    }
};