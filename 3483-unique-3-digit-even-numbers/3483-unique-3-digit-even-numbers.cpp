class Solution {
public:
    set<int> st;

    void solve(int count, vector<int>& digits, vector<bool>& used, int num) {
        if (count == 3) {
            st.insert(num);
            return;
        }

        for (int i = 0; i < digits.size(); i++) {
            if (used[i])
                continue;

            if (count == 0 && digits[i] == 0)
                continue;

            if (count == 2 && digits[i] % 2 != 0)
                continue;

            used[i] = true;

            solve(count + 1, digits, used, num * 10 + digits[i]);

            used[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits) {
        vector<bool> used(digits.size(), false);

        solve(0, digits, used, 0);

        return st.size();
    }
};