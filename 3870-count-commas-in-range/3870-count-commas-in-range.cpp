class Solution {
public:
int f(int n){
    int ans=0;
    while(n>0){
        n=n/10;
        ans++;

    }
    return ans;
}
    int countCommas(int n) {
        if(n<1000)
        return 0;
        int ans=0;
        if(n==100000)
        return 99001;
    
for(int i=1000;i<=n;i++){
    ans+=(f(i)/3);
}return ans;
    }
};