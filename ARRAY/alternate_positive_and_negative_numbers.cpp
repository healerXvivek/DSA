class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> v1;
	    vector<int> v2;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=0)
	        v1.push_back(arr[i]);
	        else
	        v2.push_back(arr[i]);
	    }
	    int i=0,j=0,k=0;
	    int n1=v1.size();
	    int n2=v2.size();
	    while(i<n1 || j<n2)
	    {
	        if(i<n1)
	        {
	            arr[k]=v1[i];
	            ++i;
	            k++;
	            
	        }
	        if(j<n2)
	        {
	            arr[k]=v2[j];
	            ++j;
	            k++;
	            
	        }
	    }
	}
};
