#include <iostream>
using namespace std;

int c_zero(int n)
{  
    if(n == 0)
       return 0;
    if(n %10 ==0)
        return 1 + c_zero(n / 10);
    else
        return c_zero(n/10); 
}

int main()
{
    cout<<"enter  n"<<endl;
    int n;
    cin>>n;
    int h=c_zero(n);
    cout<<h;
}


