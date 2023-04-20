class Solution {
public:
   vector<int> NSL(vector<int>& nums){
       int n=nums.size();
       stack<int> s;
       vector<int> v;
       for(int i=0;i<n;i++){
           while(!s.empty() && nums[s.top()]>=nums[i])
           s.pop();
           if(s.size()==0)
           v.push_back(-1);
           else
           v.push_back(s.top());
           s.push(i);
       }
       return v;
    }

    vector<int> NSR(vector<int>& nums){
       int n=nums.size();
       stack<int> s;
       vector<int> v;
       for(int i=n-1;i>=0;i--){
           while(!s.empty() && nums[s.top()]>=nums[i])
           s.pop();
           if(s.size()==0)
           v.push_back(n);
           else
           v.push_back(s.top());
           s.push(i);
       }
       reverse(v.begin(),v.end());
       return v;
    }

    int largestRectangleArea(vector<int>& h) {
        vector<int> left=NSL(h);
        vector<int> right=NSR(h);
        int res=-1;
        for(int i=0;i<h.size();i++){
            int area=(right[i]-left[i]-1)*h[i];
            res=max(res,area);
        }
        return res;
    }
};
