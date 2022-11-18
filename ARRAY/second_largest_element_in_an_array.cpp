class Solution{
public:	
	// Function returns the second
	// largest elements

	int print2largest(int arr[], int n) {
	    // code here
	    int largest =0;
	    int res=-1;
	     for (int i=0;i<n;i++)
	     {
	         if(arr[i]>arr[largest])
	         {
	             res=largest;
	             largest=i;
	         }
	         else if (arr[i]<arr[largest]){
	             if (res==-1 || arr[i]>arr[res])
	             res=i;
	         }
	     }
	     if (res==-1)
	     return -1;
	     else
	     return arr[res];
	}
	
};
