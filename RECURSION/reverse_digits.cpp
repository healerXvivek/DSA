#include <iostream>

using namespace std;
int sum=0;
int d(int n)
{
    if(n==0)
    return sum;
    
    sum=sum*10+(n%10);
    return d(n/10);
}


int main()
{
    cout<<d(12345);
    return 0;
}

