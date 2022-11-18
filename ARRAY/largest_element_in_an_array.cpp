class Solution
{
public:
    int largest(vector<int> &v, int n)
    {
       int max=v[0];
       for(int x: v)
       if(x>max)
       max=x;
       return max;
    }
};
