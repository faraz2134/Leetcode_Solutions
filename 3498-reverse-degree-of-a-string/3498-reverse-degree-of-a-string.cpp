class Solution {
public:
    int reverseDegree(string s) {
        int m=0;
        for(int x=0;x<s.size();x++){
            int p='z'-s[x]+1;
            m+=p*(x+1);
        }
        return m;
    }
};