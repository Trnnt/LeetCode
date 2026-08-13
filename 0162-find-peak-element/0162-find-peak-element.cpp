class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int str=0;
       int end = nums.size()-1;
       while(str < end){
            int mid = str +(end-str)/2;
            if(nums[mid] < nums[mid+1]){
                str = mid+1;
            }else{
                end = mid;
            }
        }
        return str;
    }
};