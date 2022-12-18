# https://leetcode.com/problems/daily-temperatures/description/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size(), 0);
      
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            while(!st.empty() && nums[i] >= nums[st.top()]) {
                st.pop();
            }
            if(!st.empty())
                ans[i] = st.top() - i;

            st.push(i);
        }
        return ans;
    }
};
