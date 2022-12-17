# https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    Node *middle(Node *head){
        Node *slow=head;
        Node *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *mid=middle(head);
        Node *curr=mid;
        Node *prev=NULL;
        
        while(curr!=NULL){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        curr=head;
        while(prev!=NULL){
            if(curr->data != prev->data)
            return false;
            else{
                curr=curr->next;
                prev=prev->next;
            }
        }
        return true;
    }
};
