class Solution {
public:
int sumi(int n){
    int sum=0;
    int product=1;
    

    while(n>0){
        int r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;


    }return product+sum;
}
    bool checkDivisibility(int n) {
        if(n%sumi(n)==0)
        return true;
        return false;
        
    }
};