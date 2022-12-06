class Solution{
public:	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    set<int> s;
	    int count=0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            s.insert(mat1[i][j]);
	        }
	    } 
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(s.find(x-mat2[i][j])!=s.end()){
                 count++;
                 s.erase(x-mat2[i][j]);
                }
            }
	   }
	   return count;
	}
};
