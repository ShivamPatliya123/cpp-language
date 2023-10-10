#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the no:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"b swapping to a:"<<a<<endl;
    cout<<"a swapping to b:"<<b<<endl;
    return 0;
}
