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
    ListNode* Reverse(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* prev=NULL, * curr=head, *fut=curr->next;
        while(curr!=NULL){
            fut=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fut;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;

        ListNode* fast=head, *slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* newNode=Reverse(slow->next);
        ListNode* first=head,*second=newNode;
        while(second!=NULL){
            if(second->val != first->val){
                Reverse(newNode);
                return false;
            }
            first=first->next;
            second=second->next;
        }
        Reverse(newNode);
        return true;
    }
};