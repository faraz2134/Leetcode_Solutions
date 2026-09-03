class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minodd=INT_MAX;
        int mineve=INT_MAX;
        for( int x:nums1){
            if(x%2!=0){
                minodd=min(x,minodd);
            }
            else
            mineve=min(x,mineve);

        }
        if(minodd!=INT_MAX && mineve<minodd)
        return false;
        return true;
        
    }
};