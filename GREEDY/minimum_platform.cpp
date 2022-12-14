# https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	int timeline[2400]={0};
    	
    	for(int i=0;i<n;i++){
    	timeline[arr[i]]++;
    	timeline[dep[i]+1]--;
    	}

    	int mx=timeline[0];
    	for(int i=1;i<2400;i++)
    	{
    	timeline[i]+=timeline[i-1];
    	mx=max(mx,timeline[i]);
    	}
    	return mx;
    }
};
