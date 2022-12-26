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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left=new ListNode(0);
        ListNode* right=new ListNode(0);
        ListNode* tail=left;
        ListNode* tailr=right;
        while(head){
            if(head->val < x){
                tail->next=head;
                tail=tail->next;
            }
            else{
                tailr->next=head;
                tailr=tailr->next;
            }
            head=head->next;
        }
        tail->next=right->next;
        tailr->next=NULL;
        return left->next; 
    }
};
