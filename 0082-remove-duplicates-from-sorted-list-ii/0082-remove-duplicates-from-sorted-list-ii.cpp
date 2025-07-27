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
        if(!head || !head->next) return head ;
        
        ListNode* dummy=new ListNode(-1);
         dummy->next=head;
        ListNode* temp = head, *prev=dummy;

        while(temp && temp->next){
            ListNode* fut=temp->next;

            if(fut && temp->val == fut->val){
               while(fut && temp->val == fut->val){
                 ListNode* temp1=fut;
                 fut=fut->next;
                 delete temp1;
                }
                ListNode* toDelete = temp;
                temp = fut;
                delete toDelete;
                prev->next=temp;
            }else{
                prev=temp;
                temp=temp->next;
            }   
        }
        return dummy->next;
    }
};