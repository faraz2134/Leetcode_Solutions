class Solution {
    private:
    int sumofdigit(int n){
        int sum=0;
while(n!=0){
    int r =n%10;
    sum=sum+r;
    n=n/10;
}return sum;
    }
public:
    int smallestIndex(vector<int>& nums) {
        int minn=INT_MAX;
        bool found=false;
        for(int i=0;i<nums.size();i++){
            if(i==sumofdigit(nums[i])){
          int number=i;
        minn=min(number,minn);
        return minn;}
       

        }return -1;
        
    }
};