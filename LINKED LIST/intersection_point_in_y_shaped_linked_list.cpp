# https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    int c1 = 0 , c2 = 0;
    Node *curr1 = head1 , *curr2 = head2;
    
     // calculating lengths
     while(curr1 != NULL)
     {
       curr1 = curr1->next; c1++;
     }
     
     while(curr2 != NULL)
     {
       curr2 = curr2->next; c2++;
     }
     int diff = abs(c2-c1);
     // traversing the bigger list
      if(c1 >c2)
      {
        for(int i=0;i<diff;i++)
        head1 = head1->next;
      }
      else
      {
            for(int i=0;i<diff;i++)
              head2 = head2->next;
      }
      //finding the common node
      while(head1 && head2)
    {
        if(head1 == head2)
        return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
