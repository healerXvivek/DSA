/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node == NULL)
        return 0;
        else
        return max(height(node->left),height(node->right))+1;
    }
};
