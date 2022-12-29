class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &ast) {
        // code here
        stack<int> st;
        for (int i = 0; i < N; i++)
        {
            bool flag = true;
            while (!st.empty() and flag)
            {
                if (st.top() > 0 and ast[i] < 0)
                {
                    if (st.top() < abs(ast[i]))
                        st.pop();
                    else if (st.top() == abs(ast[i]))
                        st.pop(), flag = false;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            if (flag)
                st.push(ast[i]);
        }
    
        vector<int> ans;
        while (!st.empty())
            ans.push_back(st.top()), st.pop();
        reverse(ans.begin(), ans.end());
    
        return ans;
    }
};
