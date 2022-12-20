/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        Node* even = new Node(-1);
        Node* even_head = even;
        Node* odd_tail = odd;
        while(odd and odd->next){
            odd_tail = odd;
            even->next = odd->next;
            even = even->next;
            odd->next = odd->next->next;
            odd = odd->next;
        }

        Node* prev = NULL, 
        Node* curr = even_head->next;
        while(curr){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        odd_tail->next = prev;
    }
};
