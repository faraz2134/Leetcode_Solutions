class Solution {
public:

    int solve(vector<vector<int>>& grid, int i, int j, int k, int dir,
              vector<vector<vector<vector<int>>>>& dp) {

        int n = grid.size();
        int m = grid[0].size();

        if (i < 0 || i >= n || j < 0 || j >= m)
            return 1e9;

        if (k < 0)
            return 1e9;

        if (i == n - 1 && j == m - 1)
            return grid[i][j];

        if (dp[i][j][k][dir] != -1)
            return dp[i][j][k][dir];

        int ans = 1e9;

        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};

        for (int newDir = 0; newDir < 4; newDir++) {

            int ni = i + di[newDir];
            int nj = j + dj[newDir];

            int newK;

            if (newDir == dir)
                newK = k;       // same direction
            else
                newK = k - 1;   // turn

            ans = min(ans,
                      solve(grid, ni, nj, newK, newDir, dp));
        }
        if (ans == 1e9)
    return dp[i][j][k][dir] = 1e9;

        return dp[i][j][k][dir] = grid[i][j] + ans;
    }

    int minCost(vector<vector<int>>& grid, int k) {

        int n = grid.size();
        int m = grid[0].size();

        vector<vector<vector<vector<int>>>> dp(
            n,
            vector<vector<vector<int>>>(
                m,
                vector<vector<int>>(
                    k + 1,
                    vector<int>(4, -1)
                )
            )
        );
        if(n==1 && m==1)
        return grid[0][0];

        int ans = 1e9;

        int di[] = {-1, 0, 1, 0};
        int dj[] = {0, 1, 0, -1};

        for (int dir = 0; dir < 4; dir++) {

            int ni = di[dir];
            int nj = dj[dir];

            ans = min(ans,
                      solve(grid, ni, nj, k, dir, dp));
        }
        
return (ans == 1e9) ? -1 : ans+grid[0][0];

       
    }
};