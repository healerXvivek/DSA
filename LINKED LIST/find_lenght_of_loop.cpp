/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    Node* slow = head , *fast = head;
    while(fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        break;
    }
    if(slow != fast)
    return 0;
    int ans=1;
    while(slow->next != fast){
        slow=slow->next;
        ans++;
    }
    return ans;
}
