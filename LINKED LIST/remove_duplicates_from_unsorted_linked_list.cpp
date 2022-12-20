/*
The structure of linked list is the following

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
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
    unordered_set<int> s;
    struct Node *curr = head; 
    struct Node *prev = NULL; 
 
    while (curr != NULL) 
    { 
        if (s.find(curr->data) != s.end()) 
        { 
           prev->next = curr->next;
           delete (curr);             
        }
        else
        { 
           s.insert(curr->data);
           prev = curr; 
        }
        curr = prev->next; 
    } 
    return head;
    }
};
