/* Following is the Linked list node structure */

/*
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

class Solution{ 
public:
    void reorderList(Node* head) {
        int len =0 ;
        Node* temp =  head;
        stack<Node*> s;
        
        while(temp != NULL){
            s.push(temp);
            temp = temp ->next;
            len++;
        }
        
        len = len/2;
        
        while(head != NULL  && len>0 ){
                Node *awe =  s.top();
                s.pop();
                awe->next = head->next;
                head->next = awe;
                head = head->next->next;
                len--;
        }
        
        head->next = NULL;
    }
};
