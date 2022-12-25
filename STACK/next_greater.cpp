class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans;
        stack<long long> s;
        s.push(arr[n-1]);
        ans.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false && s.top()<=arr[i]){
                s.pop();
            }
            long long k=s.empty() ? -1 : s.top();
            ans.push_back(k);
            s.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
