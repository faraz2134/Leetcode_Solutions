class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>st;
        for(int i:nums)
        st.insert(i);
        int n=1;
        int x=k;
        while(st.count(k)){
         k=k+x;
        }
        return k;
        
    }
};