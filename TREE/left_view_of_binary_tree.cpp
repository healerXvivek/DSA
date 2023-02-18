/* A binary tree node

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

//Function to return a list containing elements of left view of the binary tree.
void left(Node *root,int level,vector<int> &v){
    if(root==NULL)
    return;
    if(v.size()==level){
        v.push_back(root->data);
    }
    left(root->left,level+1,v);
    left(root->right,level+1,v);
}

vector<int> leftView(Node *root)
{
   vector<int> ans;
   left(root,0,ans);
   return ans;
}
