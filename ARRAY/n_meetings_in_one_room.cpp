class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        v.push_back({end[i],start[i]});
        
        sort(v.begin(),v.end());
        int k=v[0].first;
        int ans=1;
        
        for(int i=1;i<v.size();i++){
            if(v[i].second > k){
                ans++;
                k=v[i].first;
            }
        }
        return ans;
    }
};
