class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxpre(n);
        vector<int> minsuf(n);
        int ans = -1;
        maxpre[0] = nums[0];
        minsuf[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) {
            maxpre[i] = max(maxpre[i - 1], nums[i]);
        }
        for (int i = n - 2; i >= 0; --i) {
            minsuf[i] = min(minsuf[i + 1], nums[i]);
        }
        for (int i = 0; i < n; i++) {
            int c = maxpre[i] - minsuf[i];
            if (c <= k) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};