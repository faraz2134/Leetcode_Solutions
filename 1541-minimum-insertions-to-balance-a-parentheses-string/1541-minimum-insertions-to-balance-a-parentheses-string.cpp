class Solution {
public:
    int minInsertions(string s) {
        int cnt = 0;
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(')
                st.push(s[i]);

            else {
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;
                } else
                    cnt++;
                if (!st.empty())
                    st.pop();
                else
                    cnt++;
            }
        }
        return cnt + (2 * st.size());
    }
};