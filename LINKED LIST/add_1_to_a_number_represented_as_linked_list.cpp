/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head){
        Node* curr=head;
        Node* prev=NULL;
        while(curr){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    Node* addOne(Node *head) 
    {
       Node* nhead=reverse(head);
       Node* dummy=new Node(0);
       Node* tail=dummy;
       int num=1,carry=0,sum=0;
       while(nhead){
           sum=(nhead->data) + num + carry;
           carry=sum/10;
           int d=sum%10;
           Node* temp=new Node(d);
           tail->next=temp;
           tail=tail->next;
           num=0;
           nhead=nhead->next;
       }
       if(carry!=0){
           Node* temp=new Node(carry);
           tail->next=temp;
           tail=tail->next;
       }
       tail->next=NULL;
       return (reverse(dummy->next));
    }
};
