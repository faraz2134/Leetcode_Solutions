class Solution {
public:
    int largestInteger(int n, int s) {
        string ans="";
        for(int i=0;i<n;i++){
            int digit=min(9,s);
            ans+=char('0'+ digit);
            s-=digit;

        }
        if(s>0)
        return -1;
        return stoi(ans);
        
    }
};