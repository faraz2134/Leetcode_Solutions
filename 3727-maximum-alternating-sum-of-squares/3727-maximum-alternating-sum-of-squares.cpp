class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        for (int& x : nums)
            x = abs(x);
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int even = (n / 2) + (n % 2);
        int odd = n - even;

        int i = n - 1;
        long long ans = 0;
        while (even > 0) {
            ans += nums[i] * nums[i];
            i--;
            nums.pop_back();
            even--;
        }
        for (int x : nums)
            ans -= x * x;
        return ans;
    }
};