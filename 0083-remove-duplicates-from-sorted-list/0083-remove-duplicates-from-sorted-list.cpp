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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* temp=head, *fut=NULL;
        while(temp && temp->next){
            fut=temp->next;
            while(fut && temp->val == fut->val){
                ListNode* temp2=fut;
                fut=fut->next;
                delete temp2;
            }
            temp->next=fut;
            temp=temp->next;
        }
        return head;
    }
};