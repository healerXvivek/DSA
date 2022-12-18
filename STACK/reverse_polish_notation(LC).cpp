# https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long>s;
        
        for(auto x:tokens)
        {
            if(x=="+" || x=="-" || x=="*" || x=="/")
            {
                long n=s.top(); s.pop();
                long m=s.top(); s.pop();

                if(x=="+")
                s.push(n+m);

                if(x=="-")
                s.push(m-n);

                if(x=="*")
                s.push(m*n);

                if(x=="/")
                s.push(m/n);
            }
            else{
             s.push(stol(x));
            }
        }
        return (int)s.top();
    }
};
