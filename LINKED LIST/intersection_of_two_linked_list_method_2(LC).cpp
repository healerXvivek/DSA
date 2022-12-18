# https://leetcode.com/problems/intersection-of-two-linked-lists/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>s;
        ListNode*temp=headA;
        while(temp)
        {
            s.insert(temp);
            temp=temp->next;
        }
        ListNode* temp1=headB;
        while(temp1)
        {
            if(s.find(temp1)!=s.end())
            {
                return temp1;
            }
            temp1=temp1->next;
        }
        return NULL;
    }
};
