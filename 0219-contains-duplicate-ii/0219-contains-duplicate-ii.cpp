class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      unordered_map<int,int>fre;
        for(int i=0;i<nums.size();i++){
           if(fre.count(nums[i])){
            if(i-fre[nums[i]]<=k)
            return true;
           }
           fre[nums[i]]=i;

        }return false;
    }
};