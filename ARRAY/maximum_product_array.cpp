class Solution{
public:
	long long maxProduct(vector<int> arr, int n) {
	    long long minVal = arr[0];
        long long maxVal = arr[0];
        long long maxProduct = arr[0];
        for(int i=1;i<n;i++)
        {
            long long k=arr[i];
            if(k<0)
            swap(maxVal,minVal);
            
            maxVal = max(k,maxVal*k);
            minVal = min(k,minVal*k);
            
            maxProduct=max(maxProduct,maxVal);
        }
	    return maxProduct;
	}
};
