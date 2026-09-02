class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int co=0;
        int ce=0;
        int n= nums1.size();
        for(int x:nums1){
            if(x%2!=0)
            co++;
            else
            ce++;
        }
        if(co==ce || co==n||ce==n||co>=1)
        return true;
        return false;

        
    }

};