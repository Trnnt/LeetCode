class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int>st;
        long long curr_sum=0;
        int left =0;
        long long max_sum=0;
        for(int i=0; i<nums.size(); i++){
            while(st.count(nums[i])){
                st.erase(nums[left]);
                curr_sum -= nums[left];
                left++;
            }
            st.insert(nums[i]);
            curr_sum += nums[i];
            if(i - left +1 ==k){
                max_sum = max(curr_sum, max_sum);
                st.erase(nums[left]);
                curr_sum -= nums[left];
                left++;
            }
        }
        return max_sum;
        
    }
};