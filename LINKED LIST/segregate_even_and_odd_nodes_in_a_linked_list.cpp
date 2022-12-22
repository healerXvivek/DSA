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
    Node* divide(int N, Node *head){
        Node* odd=new Node(0);
        Node* even=new Node(0);
        Node* tailo=odd;
        Node* taile=even;
        Node* curr=head;
        while(curr){
            if(curr->data %2 ==0){
                taile->next=curr;
                taile=taile->next;
            }
            else{
                tailo->next=curr;
                tailo=tailo->next;
            }
            curr=curr->next;
        }
        if(odd->next != NULL){
            taile->next=odd->next;
            tailo->next=NULL;
            return even->next;
        }
        else if(even->next == NULL){
            tailo->next=NULL;
            return odd->next;
        }
        else{
            taile->next=NULL;
            return even->next;
        }
    }
};
