/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        Node* slow=head;
        Node* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            break;
        }
        if(slow != fast)
        return -1;
        slow=head;
        while(slow !=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return (slow->data);
    }
};
