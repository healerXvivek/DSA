#include <iostream>
using namespace std;
 // print n to 1
void fun(int n){
    if(n==0)
    return;
    cout<<n<<endl;
    fun(n-1); 
}
int main()
{
    int n=5;
    fun(5);
    return 0;
}

//print 1 to n 
// void fun(int n){
//     if(n==0)
//     return;
//     fun(n-1);
//     cout<<n<<endl;
// }
// int main()
// {
//     int n=5;
//     fun(5);
//     return 0;
// }


