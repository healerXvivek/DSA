# https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       int len=0;
       Node *curr=head;
       
       while(curr!=NULL){
           curr=curr->next;
           len++;
       }
       
       if(len<n)
       return -1;
       
       curr=head;
       for(int i=1;i<len-n+1;i++)
       curr=curr->next;
       
       return curr->data;
}
