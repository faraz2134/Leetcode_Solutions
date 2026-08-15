class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   vector<int>mp(256,-1);
   int maxi=0;
   int l=0;
   int r=0;
   int n=s.size();
   while(r<n){
    if(mp[s[r]]!=-1){
        if(mp[s[r]]>=l)
        l=mp[s[r]]+1;
    }
    int len=r-l+1;
    maxi=max(maxi,len);
    mp[s[r]]=r;
    r++;
   }
   return maxi;
   
    }
};
