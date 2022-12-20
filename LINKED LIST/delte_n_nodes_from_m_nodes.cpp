/*
delete n nodes after m nodes
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
    void linkdelete(struct Node  *head, int M, int N)
    {
        if(head == NULL || head->next == NULL) 
        return;
        Node *curr = head;
        Node *prev = NULL;
        while(curr != NULL){
            for(int i = 0; i < M && curr != NULL; i++){
            prev = curr;
            curr = curr->next;
            }
            for(int j = 0; j < N && curr != NULL; j++){
               curr = curr->next;
            }
            prev->next = curr;
        }
    }
};
