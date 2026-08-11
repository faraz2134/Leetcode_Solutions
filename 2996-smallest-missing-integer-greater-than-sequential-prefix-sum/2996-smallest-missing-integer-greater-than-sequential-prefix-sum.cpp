class Solution {
public:
    int missingInteger(vector<int>& A) {
        int n = A.size();
        unordered_set<int> s(A.begin(), A.end());
        int sum = A[0];

        for (int i = 1; i < n; i++) {
            if (A[i] == A[i - 1] + 1) sum += A[i];
            else break;
        }

        while (s.count(sum))
            sum++;

        return sum;
    }
};