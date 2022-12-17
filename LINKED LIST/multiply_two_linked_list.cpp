# https://practice.geeksforgeeks.org/problems/multiply-two-linked-lists/1

/* Linked list node structure
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};*/

/*The method multiplies 
two  linked lists l1 and l2
and returns their product*/

/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  long long num1=0;
  long long num2=0;
  
  while(l1){
      num1=((num1*10)+(l1->data))%1000000007;
      l1=l1->next;
  }
  while(l2){
      num2=((num2*10)+(l2->data))%1000000007;
      l2=l2->next;
  }
  
  long long ans=(num1*num2)%1000000007;
  return ans;
}
