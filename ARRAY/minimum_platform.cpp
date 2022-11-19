class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	int timeline[2401]={0};
    	for(int i=0;i<n;i++)
    	timeline[arr[i]]++;
    	for(int i=0;i<n;i++)
    	timeline[dep[i]+1]--;
    	int mx=timeline[0];
    	for(int i=1;i<2401;i++)
    	{
    	timeline[i]+=timeline[i-1];
    	mx=max(mx,timeline[i]);
    	}
    	return mx;
    }
};
