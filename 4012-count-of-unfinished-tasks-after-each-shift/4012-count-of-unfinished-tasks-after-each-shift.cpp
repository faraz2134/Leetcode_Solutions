class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();
        vector<int> ans;
        vector<long long> prefix(n);

        prefix[0] = tasks[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + tasks[i];
        }

        long long done = 0;

        for (int i = 0; i < shifts.size(); i++) {
            done += shifts[i];

            if (done >= prefix[n - 1]) {
                ans.push_back(0);
                done = 0;   // restart from task 0
            }
            else {
                int x = upper_bound(prefix.begin(), prefix.end(), done) - prefix.begin();
                ans.push_back(n - x);
            }
        }

        return ans;
    }
};