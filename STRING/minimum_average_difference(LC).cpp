class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        long long ps[n];
        long long avg_diff;
        pair<long long ,int> p;
        p={INT_MAX,INT_MAX};
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            if((n-i-1)!=0)
            avg_diff=abs(abs(ps[i]/(i+1)) - abs((ps[n-1]-ps[i])/(n-i-1)));
            else
            avg_diff=abs(ps[i]/(i+1));
            if(p.first > avg_diff){
                p={avg_diff,i};
            }
        }
        return p.second;
    }
};
