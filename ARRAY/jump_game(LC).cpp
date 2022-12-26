class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        return 1;
        if(arr[0]==0)
        return 0;
        int maxReach=arr[0];
        int step=arr[0];
        int jump=1;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            return 1;
            maxReach=max(maxReach,i+arr[i]);
            step--;
            if(step==0)
            {
            jump++;
            if(i>=maxReach)
            return 0;
            step=maxReach-i;
            }
        }
        return 0;
    }
};
