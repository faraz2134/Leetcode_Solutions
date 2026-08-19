class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>hash(26,0);
        int l=0;
        int r=0;
        int n=s.size();
        int maxi=0;
        int maxfr=0;
        while(r<n){
          hash[s[r]-'A']++;
          maxfr=max(maxfr,hash[s[r]-'A']);
          int changes=(r-l+1)-maxfr;
          int curr=0;
          if(changes<=k){
          curr=changes;
          maxi=max(maxi,r-l+1);
          }
          else{
          while(changes>k){
          hash[s[l]-'A']--;
            l++;
          changes = r - l + 1 - maxfr;
        
          }
          }
          r++;

          
            

        }return maxi;

        
    }
};