class Solution{
    
public:
    Node* sortList(Node* head)
    {
        Node* curr = head->next;
        Node *prev = head;
        while(curr){
          if(curr->data < prev->data)
         {
              prev->next = curr->next;
              curr->next =head;
              head = curr;
              curr = prev;
          } 
          else
          prev = curr;
          
          curr = curr->next;
        }
        
        return head;
    }
};
