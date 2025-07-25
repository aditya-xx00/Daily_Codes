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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head ) return NULL;

        ListNode* fast=head, *slow=head;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        // for case when n equal to the size of linked list
        if(fast==NULL)
           return head->next;
           
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=temp->next;
        delete temp;
        return head;
    }
};