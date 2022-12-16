# https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

/*
structure of the node of the list is as
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

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int x) {
        Node* temp=new Node(x);
        if(head==NULL)
        return temp;
        if(head->data > x){
            temp->next=head;
            return temp;
        }
        Node *curr=head;
        while(curr->next!=NULL && curr->data<x)
        curr=curr->next;
        temp->next=curr->next;
        curr->next=temp;
        return head;
    }
};
