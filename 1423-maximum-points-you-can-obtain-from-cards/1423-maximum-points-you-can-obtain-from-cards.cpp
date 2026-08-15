class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int maxi=0;
        
        int n=cardPoints.size();
        for(int i=0;i<k;i++)
        maxi+=cardPoints[i];
        int sum=maxi;
        int r=n-1;
        for(int i=k-1;i>=0;i--){
            sum-=cardPoints[i];
            sum+=cardPoints[r];
            maxi=max(maxi,sum);
            r--;

        }
        return maxi;

        
       

 
    
        

            

        
    }
};