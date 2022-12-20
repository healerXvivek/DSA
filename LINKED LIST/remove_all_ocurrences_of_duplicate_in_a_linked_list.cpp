/* Linked List node structure
    
struct Node {
	int data;
	struct Node *next;
};

*/

class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        Node* temp=head;
        Node* k=new Node(-1);
        Node* ans=k;
        map<int,int> m;
        while(temp!=NULL)
        {
            m[temp->data]++;
            temp=temp->next;
        }
        for(auto i:m)
        {
            if(i.second<2)
            {
                Node* n=new Node(i.first);
                ans->next=n;
                ans=n;
            }
        }
        return k->next;
    }
};
