class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int ans=0;
        int count =1;
        int n = colors.size();
        for(int i=1; i<n+k-1; i++){
            int prev = colors[(i-1) % n];
            int curr = colors[i % n];
            if(prev != curr){
                count++;
            }else{
                count =1;
            }
            if(count >= k){
            ans++;
            }
        }

        return ans;
        
    }
};