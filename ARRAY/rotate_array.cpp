class Solution{
    public:
    void reverse(int a[],int s,int e)
	{
	    while(s<e)
	    {
	        swap(a[s],a[e]);
	        s++;
	        e--;
	    }
	}
    
    void rotateArr(int arr[], int k, int n){
        k=k%n;
	   reverse(arr,0,k-1);
	   reverse(arr,k,n-1);
	   reverse(arr,0,n-1);
	   }
};
