class Solution {
public:
int firstdigit(long long x){
  
    while(x>=10){
        x=x/10;
     
      
    
    }
    return x;

}
int lastdigit(long long x){
    return x%10;
}
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
        long long pre[n];
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]+nums[i];
        int i=0;
        int j=0;
        int count=0;
         for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                long long sum;

                if (i == 0)
                    sum = pre[j];
                else
                    sum = pre[j] - pre[i - 1];

                if (firstdigit(sum) == x &&
                    lastdigit(sum) == x) {

                    count++;
                }
            }
        }
        return count;
    }
};