class Solution
{
  public:
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> Q(k);
        vector<int> ans;
        for (int i = 0; i < k; ++i) 
        {
        while ((!Q.empty()) && arr[i] >= arr[Q.back()])
            Q.pop_back();
        Q.push_back(i);
        }
        for (int i=k;i<n;i++) 
        {
        ans.push_back(arr[Q.front()]);
        while ((!Q.empty()) && Q.front() <= i - k)
            Q.pop_front();
        while ((!Q.empty()) && arr[i] >= arr[Q.back()])
            Q.pop_back();
        Q.push_back(i);
       }
       ans.push_back(arr[Q.front()]);
       return ans;
    }
};
