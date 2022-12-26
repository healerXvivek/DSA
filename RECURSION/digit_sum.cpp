#include <iostream>
using namespace std;

int digitsum(int n){
    if(n==0)
    return n;
    
    return n%10+digitsum(n/10);
}
int main()
{
    int n=12345;
    cout<<digitsum(n);
    return 0;
}

