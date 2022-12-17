# https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/0 

/*
 
  Node is defined as
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
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node *curr=head;
        Node *zero=new Node(0);
        Node *one=new Node(0);
        Node *two=new Node(0);
        Node *tailz=zero;
        Node *tailo=one;
        Node *tailt=two; 
   while(curr!=NULL)
   {
       if (curr->data==0)
       {
          tailz->next=curr;
          tailz=tailz->next;
       }
       else if (curr->data==1)
       {
          tailo->next=curr;
          tailo=tailo->next;
       }
       else
       {
          tailt->next=curr;
          tailt=tailt->next;
       }
      curr=curr->next; 
   }
  if(one->next!=NULL)
   tailz->next=one->next;
  else
  tailz->next=two->next;
   
   tailo->next=two->next;
   tailt->next=NULL;
   
   return(zero->next);
        
    }
};
