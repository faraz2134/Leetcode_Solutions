class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        long long total=0;
        long long first=0;
        int count=0;
        int n=nums.size();
        for(int x:nums)
        total+=x;
        for(int i=0;i<n/2;i++)
        first+=nums[i];

        if(first>total-first)
        count++;
        for(int i=0;i<n-1;i++){
            first=first-nums[i];
            first+=nums[(i+n/2)%n];
            if(first>total-first)
            count++;
        }
        return count;
        
    }
};