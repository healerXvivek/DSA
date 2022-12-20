/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node* mergesorted(Node* node1, Node* node2){
    if(!node1){
        return node2;
    }
    if(!node2){
        return node1;
    }
    Node* ans=new Node(-1);
    Node* temp=ans;
    while(node1 && node2){
        if(node1->data<node2->data){
            temp->bottom=node1;
            node1=node1->bottom;
        }
        else{
            temp->bottom=node2;
            node2=node2->bottom;
        }
        temp=temp->bottom;
    }
    while(node1){
        temp->bottom=node1;
        temp=node1;
        node1=node1->bottom;
    }
    while(node2){
        temp->bottom=node2;
        temp=node2;
        node2=node2->bottom;
    }
    temp->next=NULL;
    ans=ans->bottom;
    return ans;
}

Node *flatten(Node *root)
{
   if(!root || !root->next){
       return root;
   }
   Node* down=root;
   Node* right=flatten(down->next);
   Node* ans=mergesorted(down,right);
   return ans;
}
