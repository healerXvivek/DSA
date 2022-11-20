class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
         sort(intervals.begin(),intervals.end());
         int idx=0;
         ans.push_back({intervals[0][0],intervals[0][1]});
         for(int i=1;i<intervals.size();i++)
         {
             if(ans[idx][1]>=intervals[i][0])
             {
                 ans[idx][1]=max(ans[idx][1],intervals[i][1]);
             }
             else
             {
                 idx++;
                 ans.push_back({intervals[i][0],intervals[i][1]});
             }
         }
         return ans;
    }
};
