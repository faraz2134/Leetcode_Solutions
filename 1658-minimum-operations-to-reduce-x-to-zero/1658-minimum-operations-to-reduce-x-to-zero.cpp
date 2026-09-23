class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int i=0;
        int k=reduce(nums.begin(),nums.end())-x;
        if(k<0)
        return -1;
        if(k==0)
        return n;
        int best=-1;
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>k){
                sum-=nums[i++];

            }if(sum==k){
                best=max(best,j-i+1);
            }
              
        }
        if(best==-1)
        return -1;
        return n-best;
    }
};