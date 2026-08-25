class Solution {
public:
int f(vector<int>& w, int cap) {
    int day=1;
    int load=0;
    for(int x:w){
        if(load+x>cap){
        day++;
        load=0;
        }
        load+=x;
    }
    return day;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        int ans=INT_MAX;
        for(int x:weights)
        high+=x;

        while(low<=high){
            int mid=(low+high)/2;
            int day=f(weights,mid);
            if(day<=days){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
       
    }
};