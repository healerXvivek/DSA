# https://practice.geeksforgeeks.org/problems/remove-every-kth-node/1

/* Link list Node 

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

Node* deleteK(Node *head,int K)
{
  Node* fast=head;
  Node* slow;
  int count=0;
  if(K==1)
  {
      return NULL;
  }
  while(fast)
  {
    count++;
    if(count==K)
    {
        slow->next=fast->next;
        count=0;
    }
    slow=fast;
    fast=fast->next;
  }
  return head;
}
