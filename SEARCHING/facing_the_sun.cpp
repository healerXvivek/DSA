class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int arr[], int n) {
	    int max=0;
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	        max=arr[i];
	        c++;
	        }
	    }
	    return c;
	}
};
