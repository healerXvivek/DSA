class Solution
{
public:
    long long int func(int n)
   {
       if(n==1)
           return 0;
       if(n==2)
           return 1;
       long long int x = pow(func(n-2),2) - func(n-1);
       return x;
   }
   
   void gfSeries(int N)
   {
       // Write Your Code here
       for(int i=1;i<=N;i++)
           cout << func(i) << " ";
       cout << endl;
   }
};
