class Solution {
public:

    long long countCommas(long long n) {
        long long totalcommas=0;
        long long rangestart=1000;
        long long rangeend=rangestart*1000-1;
        int commacount=1;

        while(rangestart<=n){
            long long number=(min(n,rangeend)-rangestart+1);
            totalcommas+=1LL*number*commacount;
            commacount++;
            if(n<rangeend)
            break;
            rangestart=rangeend+1;
            rangeend=rangestart*1000-1;


        }return totalcommas;

        
    }
};