class Solution {
  public:
    void dfs(vector<int> adjG[],int s,int vis[]){
        vis[s]=1;
        for(int u : adjG[s])
        if (!vis[u])
        dfs(adjG,u,vis);
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> adjG[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j] == 1 && i!=j){
                    adjG[i].push_back(j);
                    adjG[j].push_back(i);
                }
            }
        }
        
        int vis[V] = {0};
        int count = 0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(adjG,i,vis);
            }
        }
        return count;
    }
};
