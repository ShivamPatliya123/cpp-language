#include <iostream>
using namespace std;
int main()
{
    int a,b, tamp;
    cout<<"Enter the no a and b:";
    cin>>a>>b;
    tamp=a;
    a=b;
    b=tamp;
    cout<<"b Swapping to a:"<<a<<endl;
    cout<<"a Swapping to b:"<<b<<endl;
    return 0;
}
