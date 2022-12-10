class Solution{
    public:
    vector<int> findFibSubset(int arr[], int n) {
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        mx=max(mx,arr[i]);
        unordered_set<int> s;
        int a=0,b=1;
        s.insert(a);
        s.insert(b);
        while(b<=mx){
            int sum=a+b;
            s.insert(sum);
            a=b;
            b=sum;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(s.find(arr[i])!=s.end())
                ans.push_back(arr[i]);
        }
        return ans;
    }
};
