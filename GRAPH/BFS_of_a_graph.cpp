class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        queue<int> q;
        bool vis[V];
        int s=0;
        for(int i=0;i<V;i++)
        vis[i]=false;
        vis[s]=true;
        q.push(s);
        while(!q.empty()){
            int u=q.front();
            ans.push_back(u);
            q.pop();
            for( int v : adj[u]){
                if(vis[v]==false)
                {
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    return ans;
    }
};
