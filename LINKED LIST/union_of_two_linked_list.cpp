/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    set<int> s;
    while(head1){
        s.insert(head1->data);
        head1=head1->next;
    }
    while(head2){
        s.insert(head2->data);
        head2=head2->next;
    }
    
    vector<int> v;
    for(auto x : s)
    v.push_back(x);
    
    Node* dummy=new Node(0);
    Node* tail=dummy;
    for(auto x : v){
        Node* temp=new Node(x);
        tail->next=temp;
        tail=tail->next;
    }
    tail->next=NULL;
    return dummy->next;
}
