class Solution {
  public:
      int dfs(int V,int start,vector<int>adj[],vector<int>&visi,int pathVis[],vector<int>&check){
         visi[start]=1;
         pathVis[start]=1;
         check[start]=0;
        for(int i:adj[start]){
             if(visi[i]==0 && dfs(V,i,adj,visi,pathVis,check)){
                 check[start]=0;
                  return 1;
             }else if(pathVis[i]){
                 return 1;

             }

        }
       check[start]=1;
       pathVis[start]=0;
        return 0;
    }

    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int>visi(V,0);
        int pathVis[V]={0};
        vector<int>v;
         vector<int>check(V);
        for(int i=0;i<V;i++){
               if(visi[i]==0){
                  dfs(V,i,adj,visi,pathVis,check);
               }
        }
        for(int i=0;i<V;i++){
            if(check[i]==1){
                 v.push_back(i);
            }
        }
        return v;
    }
};
