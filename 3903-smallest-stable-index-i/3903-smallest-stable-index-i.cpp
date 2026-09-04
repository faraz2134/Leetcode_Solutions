class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int ans=-1;
        int n=nums.size();
        while(i<n){
            maxi=max(maxi,nums[i]);
            for(int j=i;j<n;j++){
                mini=min(mini,nums[j]);
            }
           int a =maxi-mini;
            if(a<=k){
                ans=i;
            break;
            }
            mini=INT_MAX;
            i++;
            
        }return ans;
    }
};