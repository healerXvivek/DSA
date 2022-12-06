class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int ans=-1;
	    int max_val=0;
	    for(int i=0;i<n;i++){
	        int val=count(arr[i].begin(),arr[i].end(),1);
	        if(val > max_val){
	            max_val=val;
	            ans=i;
	        }
	    }     
	    return ans;
	}
};
