class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int ans=0;
	    int first=firstindex(arr,n,x);
	    int last=lastindex(arr,n,x);
	    if(first ==-1 && last==-1)
	    return 0;
	    ans=last-first+1;
	    return ans;
	}
	
	int firstindex(int arr[], int n, int x) {  
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	        int mid=s+(e-s)/2;
	        if(arr[mid]<x)
	        s=mid+1;
	        else if(arr[mid]>x) 
	        e=mid-1;
	        else if(arr[mid]==x){
	            if(arr[mid]!=arr[mid-1])
	            return mid;
	            else
	            e=mid-1;
	        }       
	     }
	     return -1;
	}
	
	int lastindex(int arr[], int n, int x) {  
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	        int mid=s+(e-s)/2;
	        if(arr[mid]<x)
	        s=mid+1;
	        else if(arr[mid]>x) 
	        e=mid-1;
	        else if(arr[mid]==x){
	            if(arr[mid]!=arr[mid+1])
	            return mid;
	            else
	            s=mid+1;
	        }       
	     }
	     return -1;
	}
};
