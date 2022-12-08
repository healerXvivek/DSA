class Solution{
	public:
	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	    vector<long long> v;
	    unordered_map<int,int> mp;
	    
	    for(int i=0;i<m;i++)
	        mp[b[i]]=1;
	        
	    for(int i=0;i<n;i++){
	    if(!mp[a[i]])
	        v.push_back(a[i]);
	    }
	    
	    return v;
	}
};
