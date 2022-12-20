
//User function Template for C++
/* Linked List Node structure
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
// Move Zeros to the front of the list
void moveZeroes(struct Node **head)
{
    Node *curr=*head;
    Node *zero=new Node(-1);
    Node *tailz=zero;
    Node *num=new Node(-1);
    Node *tailn=num;
    while(curr){
        if(curr->data == 0){
            tailz->next=curr;
            tailz=tailz->next;
        }
        else{
            tailn->next=curr;
            tailn=tailn->next;
        }
        curr=curr->next;
    }
    tailn->next=NULL;
    tailz->next=num->next;
    *head=zero->next;
}
