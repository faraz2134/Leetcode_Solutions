class Solution {
public:
int solve(int i , int m , vector<vector<int>>&dp,vector<int>&p){
    if(i>p.size()-1)
    return 0;
    if(dp[i][m]!=-1)
    return dp[i][m];
    int take=INT_MIN;
    int sum=0;
    for(int k=i;k<(2*m+i)&&k<p.size();k++){
       sum+=p[k];
       int x=k-i+1;
       int newm=max(m,x);
       int opp=solve(k+1,newm,dp,p);
       int rem=0;
       for(int j=k+1;j<p.size();j++)
       rem+=p[j];
       int curr=sum+rem-opp;
       take=max(take,curr);


    }return dp[i][m]=take;
}
    int stoneGameII(vector<int>& piles) {
        
        int n=piles.size();
          vector<vector<int>> dp(n, vector<int>(n + 1, -1));
          return solve(0, 1, dp, piles);
    }
};