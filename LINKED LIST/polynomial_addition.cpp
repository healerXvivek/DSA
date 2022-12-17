# https://practice.geeksforgeeks.org/problems/polynomial-addition/1

/* Structure of Node used
struct Node
{
    int coeff;
    int pow;
    struct Node* next;
    
    Node(int c, int p){
        coeff = c;
        pow = p;
        next = NULL;
    }
    
};
*/

class Solution{
  public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node* addPolynomial(Node *p1, Node *p2)
    {
    Node *ans=new Node(0,0);
    Node *tail=ans;
    while(p1 && p2){
        if(p1->pow > p2->pow){
            tail->next=p1;
            p1=p1->next;
        }
        else if(p1->pow < p2->pow){
            tail->next=p2;
            p2=p2->next;
        }
        else{
            int sum=(p1->coeff)+(p2->coeff);
            p1->coeff=sum;
            tail->next=p1;
            p1=p1->next;
            p2=p2->next;
        }
        tail=tail->next;
    }
    
    if(p1)
    tail->next=p1;
    if(p2)
    tail->next=p2;
    
    return ans->next;
    }
};
