class Solution {
public:
    int n, m, k;

    vector<vector<vector<vector<int>>>> dp;

    int solve(int i, int j, int turns, int prev, vector<vector<int>>& grid) {

        if (i < 0 || j < 0 || i >= n || j >= m || turns > k)
            return INT_MAX;

        if (i == n - 1 && j == m - 1)
            return grid[i][j];

        if (dp[i][j][turns][prev] != -1)
            return dp[i][j][turns][prev];

        int x = INT_MAX;
        int y = INT_MAX;
        int nx = INT_MAX;
        int ny = INT_MAX;

        if (prev == 0) {
            x = solve(i, j + 1, turns, 0, grid);
            y = solve(i + 1, j, turns + 1, 1, grid);
            nx = solve(i, j - 1, turns + 1, 2, grid);
            ny = solve(i - 1, j, turns + 1, 3, grid);
        }

        else if (prev == 1) {
            x = solve(i, j + 1, turns + 1, 0, grid);  
            y = solve(i + 1, j, turns, 1, grid);      
            nx = solve(i, j - 1, turns + 1, 2, grid); 
            ny = solve(i - 1, j, turns + 1, 3, grid); 
        }

        else if (prev == 2) {
            x = solve(i, j + 1, turns + 1, 0, grid);  
            y = solve(i + 1, j, turns + 1, 1, grid);  
            nx = solve(i, j - 1, turns, 2, grid);     
            ny = solve(i - 1, j, turns + 1, 3, grid); 
        }

        else if (prev == 3) {
            x = solve(i, j + 1, turns + 1, 0, grid);  
            y = solve(i + 1, j, turns + 1, 1, grid);  
            nx = solve(i, j - 1, turns + 1, 2, grid); 
            ny = solve(i - 1, j, turns, 3, grid);     
        }

        else { 
            x = solve(i, j + 1, turns, 0, grid);
            y = solve(i + 1, j, turns, 1, grid);
            nx = solve(i, j - 1, turns, 2, grid);
            ny = solve(i - 1, j, turns, 3, grid);
        }

        int best = min({x, y, nx, ny});

        if (best == INT_MAX)
            return dp[i][j][turns][prev] = INT_MAX;

        return dp[i][j][turns][prev] = grid[i][j] + best;
    }

    int minCost(vector<vector<int>>& grid, int K) {

        n = grid.size();
        m = grid[0].size();
        k = K;

    
        dp.assign(n, vector<vector<vector<int>>>(
                         m, vector<vector<int>>(k + 1, vector<int>(5, -1))));

        int ans=solve(0, 0, 0, 4, grid);

        return (ans==INT_MAX)?-1:ans;
    }
};