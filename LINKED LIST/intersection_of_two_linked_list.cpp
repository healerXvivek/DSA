# https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1

/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_set<int> s;
        Node *curr=head2;
        
        while(curr!=NULL){
        s.insert(curr->data);
        curr=curr->next;
        }
        
        Node *c_node=new Node(0);
        Node *tail=c_node;
        curr=head1;
        while(curr!=NULL){
            if(s.find(curr->data) != s.end()){
                tail->next=curr;
                tail=tail->next;
            }
            curr=curr->next;
        }
        
        tail->next=NULL;
        return c_node->next;  
    }
};
