class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
        int temp[n];
        for(int i=0;i<n;i++){
            temp[i]=arr1[i]-arr2[i];
        }
        unordered_map<int,int> mp;
        mp[0]=-1;
        int ps=0,ans=0;
        for(int i=0;i<n;i++){
            ps+=temp[i];
            if(mp.find(ps)==mp.end())
            mp[ps]=i;
            else
            ans=max(ans,i-mp[ps]);
        }
        return ans;
    }
};
