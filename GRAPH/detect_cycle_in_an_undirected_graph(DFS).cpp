class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycleRec(vector<int> adj[],int s,bool visited[],int parent)
    {
        visited[s]=true;
        for(int u : adj[s])
        {
            if(visited[u]==false)
            {
            if(isCycleRec(adj,u,visited,s)==true)
            return true;
            }
            else if(u!=parent)
            {
            return true;
            }
        }
        return false;
    }
    
    bool isCycle(int v, vector<int> adj[]) {
        bool visited[v];
        for(int i=0;i<v;i++)
        visited[i]=false;
        for(int i=0;i<v;i++)
        if(visited[i]==false)
        if(isCycleRec(adj,i,visited,-1)==true)
        return true;
        
    return false;    
    }
};
