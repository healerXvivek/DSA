class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		int k=0;
		for(int i=0; i<A.size();i++){
		    k+=count(A[i].begin(),A[i].end(),0);
		}
		return k;
	}
};
