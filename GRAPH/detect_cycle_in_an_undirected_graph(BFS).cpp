class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detect(vector<int> adj[],int s,int vis[]){
        vis[s]=1;
        queue<pair<int,int>> q;
        q.push({s,-1});
        while(!q.empty()){
            int u=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(int v : adj[u]){
                if(!vis[v]){
                    vis[v]=1;
                    q.push({v,u});
                }
                else if(parent != v){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                if(detect(adj,i,vis))
                return true;
            }
        }
        return false;
    }
};
