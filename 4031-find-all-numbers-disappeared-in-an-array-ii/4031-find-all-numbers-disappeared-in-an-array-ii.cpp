class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int l=lower;
        
        for(int i=0;i<nums.size();i++){
            int u=nums[i]-1;
            if(nums[i]<lower ||nums[i]>upper)
            continue;
           
            if(nums[i]>l){
                ans.push_back({l,u});
            }
            l=nums[i]+1;
           

        }
         if (l <= upper) {
            ans.push_back({l, upper});
        }
        return ans;
        
    }
};