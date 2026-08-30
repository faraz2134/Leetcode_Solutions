class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int miniI=-1;
        int maxiI=-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
                miniI=i;

            }if(nums[i]>maxi){
                maxi=nums[i];
                maxiI=i;
            }
        }
        int n=nums.size();
       
       int l=min(miniI,maxiI);
       int r=max(miniI,maxiI);
       int ans=min({r+1,n-l,l+1+n-r});
       return ans;
        
    }
};