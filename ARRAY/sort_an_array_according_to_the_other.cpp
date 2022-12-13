class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> a1, int n, vector<int> a2, int m) 
    {
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[a1[i]]++;
        
        for(int i=0;i<m;i++){
            auto it=mp.find(a2[i]);
            if(it!=mp.end()){
                int c=it->second;
                while(c>0){
                    ans.push_back(it->first);
                    c--;
                }
                mp.erase(a2[i]);
            }
        }
        
        for(auto x : mp){
            int c=x.second;
            while(c>0){
                ans.push_back(x.first);
                c--;
            }
            mp.erase(x.first);
        }
        return ans;
    } 
};
