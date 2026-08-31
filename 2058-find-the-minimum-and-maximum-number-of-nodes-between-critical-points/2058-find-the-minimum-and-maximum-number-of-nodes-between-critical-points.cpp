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
        vector<int>arr;
    ListNode*temp=head;
    ListNode*prev=NULL;
    int index=1;
    while(temp!=NULL){
        if(prev!=NULL && temp->next!=NULL){
            if(prev->val>temp->val && temp->val<temp->next->val){
                arr.push_back(index);
             
            } else if(prev->val<temp->val && temp->val>temp->next->val){
                arr.push_back(index);
             
            }
            
        }   prev=temp;
                temp=temp->next;
                index++;
    }if(arr.empty()||arr.size()==1)
    return {-1,-1};
    int mini=arr[0];
    int maxi=arr[arr.size()-1];
    int ans2=maxi-mini;
    int ans1=INT_MAX;
    for(int i =0;i<arr.size()-1;i++){
        int x=arr[i+1]-arr[i];
        ans1=min(ans1,x);

    }
    return {ans1,ans2};




    }
};