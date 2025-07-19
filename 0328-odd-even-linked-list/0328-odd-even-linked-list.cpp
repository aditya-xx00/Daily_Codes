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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return nullptr;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;
        while(odd && odd->next!=nullptr){
            ListNode* newNode=new ListNode(odd->val);
            tail->next=newNode;
            tail=tail->next;
            odd=odd->next->next;
        }
        if(odd){
          ListNode* newNode=new ListNode(odd->val);
            tail->next=newNode;
            tail=tail->next;
        }
         
         while(even && even->next!=nullptr){
            ListNode* newNode=new ListNode(even->val);
            tail->next=newNode;
            tail=tail->next;
            even=even->next->next;
        }
        if(even) {
             ListNode* newNode=new ListNode(even->val);
            tail->next=newNode;
            tail=tail->next;
        }
        ListNode* result=dummy->next;
        delete dummy;
        return result;
    }
};