/*Structure of the node of the binary tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
    	vector<int> v;
    	if(root==NULL)
    	return v;
    	queue<Node*> q;
    	q.push(root);
    	int n=0;
    	bool check=false;
    	while(!q.empty()){
    	    n=q.size();
    	    for(int i=0;i<n;i++){
    	        Node* curr=q.front();
    	        q.pop();
    	        v.push_back(curr->data);
    	        if(curr->left!=NULL) q.push(curr->left);
    	        if(curr->right!=NULL) q.push(curr->right);
    	    }
    	    if(!check){
    	        for(auto i : v)
    	        ans.push_back(i);
    	    }
    	    else{
    	        reverse(v.begin(),v.end());
    	        for(auto i : v)
    	        ans.push_back(i);
    	        }
    	   check=!check; 
    	   v.clear();  
    	}
    	return ans;
    }
};

