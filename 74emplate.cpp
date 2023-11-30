#include<iostream>
using namespace std;
template<class x>
x big(x a,x b)
{
    if(a>b)
    return(a);
else 
return(b);
}
int main()
{
    cout<<big(3,4)<<endl;
    cout<<big(5.6,3.43)<<endl;
    cout<<big('f','s')<<endl;
    return 0;
}
