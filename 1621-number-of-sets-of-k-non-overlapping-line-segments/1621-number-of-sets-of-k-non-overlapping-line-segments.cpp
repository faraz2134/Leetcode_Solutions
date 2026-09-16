class Solution {
public:
    const int MOD = 1e9 + 7;
    long long dp[2005][2005];

    long long solve(int n, int r) {
        if (r == 0 || r == n)
            return 1;

        if (dp[n][r] != -1)
            return dp[n][r];

        return dp[n][r] =
            (solve(n - 1, r - 1) + solve(n - 1, r)) % MOD;
    }

    int numberOfSets(int n, int k) {
        memset(dp, -1, sizeof(dp));

        return solve(n + k - 1, 2 * k);
    }
};