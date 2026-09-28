class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string>mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string ans="";
      
       int j=0;
       while(j<s.size()){
        if(s[j]=='('){
            j++;
            string curr="";
            while(s[j]!=')'){
                curr+=s[j];
                j++;

            }
            if(mp.find(curr)!=mp.end())
                ans+=mp[curr];
                else
                ans+='?';
            
        }
        else
        ans+=s[j];
        j++;
       }return ans;
    }
};