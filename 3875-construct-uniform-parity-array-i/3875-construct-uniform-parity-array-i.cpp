class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even = true;
        bool odd = false;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i] %2 ==0)
            even = true;
            else
            odd = false;
        }
        if(even && odd){
            return false;
        }else{
            return true;
        }
    }
};