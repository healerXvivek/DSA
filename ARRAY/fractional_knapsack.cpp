//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
class Solution
{
    public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double,int>> v;
        for(int i=0;i<n;i++)
        {
            double x=(arr[i].value*1.0)/(arr[i].weight*1.0);
            v.push_back({x,i});
        }
        sort(v.begin(),v.end(),greater<pair<double,int>>());
        int s=0;
        double ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(s+arr[v[i].second].weight<W){
                ans+=arr[v[i].second].value;
                s+=arr[v[i].second].weight;
            }
            else{
                double x=(W-s)*1.0;
                ans+=(x*v[i].first);
                break;
            }
        }
        return ans;
};

