/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* head){
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
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* nfirst=reverse(first);
        Node* nsecond=reverse(second);
        Node* dummy=new Node(0);
        Node* tail=dummy;
        int sum=0,carry=0;
        while(nfirst && nsecond){
            sum=(nfirst->data) + (nsecond->data) + carry;
            carry=sum/10;
            int d=sum%10;
            Node* temp=new Node(d);
            tail->next=temp;
            tail=tail->next;
            nfirst=nfirst->next;
            nsecond=nsecond->next;
        }
        
        while(nfirst){
            sum=(nfirst->data) + carry;
            carry=sum/10;
            int d=sum%10;
            Node* temp=new Node(d);
            tail->next=temp;
            tail=tail->next;
            nfirst=nfirst->next;
        }
        
        while(nsecond){
            sum=(nsecond->data) + carry;
            carry=sum/10;
            int d=sum%10;
            Node* temp=new Node(d);
            tail->next=temp;
            tail=tail->next;
            nsecond=nsecond->next;
        }
        if(carry!=0){
            Node* temp=new Node(carry);
            tail->next=temp;
            tail=tail->next;
        }
        tail->next=NULL;
        return reverse(dummy->next);
    }
};
