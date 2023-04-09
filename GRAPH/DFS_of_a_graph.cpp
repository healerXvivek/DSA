class Solution {
  public :
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int> adj[],int s,bool visited[],vector<int> &ls)
    {
        visited[s]=true;
        ls.push_back(s);
        for(auto u : adj[s]){
            if(visited[u]==false)
            dfs(adj,u,visited,ls);
        }
    }
      
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        bool visited[v];
        int s=0;
        for(int i=0;i<v;i++)
        visited[i]=false;
        vector<int> ls;
        dfs(adj,s,visited,ls);
        return ls;
    }
    
};
