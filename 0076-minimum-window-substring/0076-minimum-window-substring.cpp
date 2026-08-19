class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int count=0;
        int m=t.size();
        string ans="";
        int si=-1;

        vector<int>map(256,0);
        for(int i=0;i<m;i++)
        map[t[i]]++;
        int mini=INT_MAX;
        int l=0;
        int r=0;
        while(r<n){
            if(map[s[r]]>0)
            count++;
            map[s[r]]--;
            while(count==m){
                if(mini>r-l+1){
                    si=l;
                    mini=r-l+1;
                }
                    map[s[l]]++;
                    if(map[s[l]]>0)
                    count--;
                    l++;
                
            }r++;
            
            }
            if(si>=0){
            for(int i=si;i<si+mini;i++)
            ans+=s[i];
            }
            return ans;

            
        
        
    }
};