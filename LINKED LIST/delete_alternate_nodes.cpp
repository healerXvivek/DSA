/*
Structure of the node of the binary tree
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
*/
// Complete this function

void deleteAlt(struct Node *head){
    Node *curr=head;
    while(curr && curr->next){
        curr->next=curr->next->next;
        curr=curr->next;
    }
}
