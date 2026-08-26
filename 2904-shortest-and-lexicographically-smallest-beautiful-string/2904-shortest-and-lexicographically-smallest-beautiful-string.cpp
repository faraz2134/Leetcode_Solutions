class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l = 0;
        int r = 0;
        int one = 0;
        int mini = INT_MAX;
        int curr = INT_MAX;
        int si = -1;
        while (r < s.size()) {
            if (s[r] == '1')
                one++;

            while (one > k) {
                if (s[l] == '1') {
                    one--;
                    l++;
                }
            }
            if (one == k) {
                while (s[l] == '0')
                    l++;
                curr = r - l + 1;
            }

            if (curr < mini) {
                mini = curr;
                si = l;
            }
            if (curr == mini && curr != INT_MAX) {
                string tempa = s.substr(si, mini);
                string tempb = s.substr(l, mini);
                if (tempb < tempa) {
                    si = l;
                }
            }
            r++;
        }
        string ans = "";
        if (mini == INT_MAX)
            return "";

        return s.substr(si, mini);
    }
};