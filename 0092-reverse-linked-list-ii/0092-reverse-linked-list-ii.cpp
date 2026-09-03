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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
       vector<int>vals;
       ListNode*curr=head;
       int cnt=1;
       while(curr){
        if(cnt>=left && cnt<=right){
            vals.push_back(curr->val);
        }
        curr=curr->next;
        cnt++;
       }
       curr=head;
       cnt=1;
       while(curr){
        if(cnt>=left && cnt<=right){
            curr->val=vals.back();
            vals.pop_back();
        }curr=curr->next;
        cnt++;

       }return head;
                

            
    

        
    }
};