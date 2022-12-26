/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(head == NULL || k==0)
        return head;
        int n=0;
        Node* temp=head;
        while(temp->next){
            temp=temp->next;
            n++;
        }
        if(n+1==k)
        return head;
        temp->next=head;
        k=k%(n+1);
        temp=head;
        while(k>1){
            temp=temp->next;
            k--;
        }
        Node* nhead=temp->next;
        temp->next=NULL;
        return nhead;
    }
};
