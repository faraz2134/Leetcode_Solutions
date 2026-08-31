/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        ListNode* prev = NULL;
        int index = 1;
        while (temp != NULL) {
            if (prev != NULL && temp->next != NULL) {
                if (prev->val > temp->val && temp->val < temp->next->val) {
                    arr.push_back(index);

                } else if (prev->val < temp->val &&
                           temp->val > temp->next->val) {
                    arr.push_back(index);
                }
            }
            prev = temp;
            temp = temp->next;
            index++;
        }
        if (arr.empty() || arr.size() == 1)
            return {-1, -1};
        int n = arr.size();
        int MaxDistance = arr[n - 1] - arr[0];
        int MinDistance = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            int x = arr[i + 1] - arr[i];
            MinDistance = min(MinDistance, x);
        }
        return {MinDistance, MaxDistance};
    }
};