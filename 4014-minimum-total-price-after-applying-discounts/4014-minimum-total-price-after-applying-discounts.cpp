class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int i=0;
        int j=0;
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        int n=prices.size();
        int m=discounts.size();
        double sum=0.0;
        while(i<n && j<m){
            int d=discounts[j];
            int p=prices[i];
            double curr=(double)(p*(100-d))/100;
            sum+=curr;
            i++;
            j++;
        }
        for(int k=i;k<n;k++)
        sum+=prices[k];
        return sum;
        

        
    }
};