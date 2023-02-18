/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
void Kdist(struct Node *root, int k, vector<int> &v){
    if(root==NULL)
    return ;
    if(k==0)
    v.push_back(root->data);
    else{
        Kdist(root->left,k-1,v);
        Kdist(root->right,k-1,v);
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> ans;
    Kdist(root,k,ans);
    return ans;
}
