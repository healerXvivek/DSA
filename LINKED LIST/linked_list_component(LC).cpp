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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s;
        for(auto i : nums)
        s.insert(i);
        int ans=0;
        bool b=false;
        while(head){
            int val=head->val;
            if(s.count(val) && !b){
                b=true;
                ans++;
            }
            else if(s.count(val)==0 && b){
                b=false;
            }
            head=head->next;
        }
        return ans;
    }
};
