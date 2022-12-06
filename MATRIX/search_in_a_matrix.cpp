class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    for(int i=0;i<N;i++){
	        if(find(mat[i].begin(),mat[i].end(),X)!=mat[i].end())
	        return 1;
	    }
	    return 0;
	}
};
