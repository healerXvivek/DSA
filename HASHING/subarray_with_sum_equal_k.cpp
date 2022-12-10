class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int ps=0,count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            ps+=arr[i];
            if(mp.find(ps-k)!=mp.end()){
                count+=mp[ps-k];
            }
            mp[ps]++;
        }
        return count;
    }
};
