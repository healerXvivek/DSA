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
       Node *first=head;
       
       for(int i=1;i<=n;i++){
           if(first==NULL)
           return -1;
           first=first->next;
       }
       
       Node *second=head;
       while(first!=NULL){
           second=second->next;
           first=first->next;
       }
       
       return second->data;
}
