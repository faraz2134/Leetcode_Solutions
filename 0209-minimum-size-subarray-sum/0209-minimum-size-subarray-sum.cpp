class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int l=0;
       int r=0;
       int mini=INT_MAX;
       int sum=0;
       while(r<nums.size()){
        sum+=nums[r];
        while(sum>=target){
            sum-=nums[l];
            mini=min(mini,r-l+1);
            l++;
        }
      
        r++;
        
       }if(mini==INT_MAX)
       return 0;
       return mini;
        
    }
};