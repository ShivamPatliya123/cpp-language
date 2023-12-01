#include<iostream>
using namespace std;
template<class x>
x add(x a,x b)
{
    return(a+b);
}
template<class y>
y sub(y a,y b)
{
    return(a-b);
}
template<class z>
z multi(z x,z y)
{
    return(x*y);
}
int main()
{
    int c;
    cout<<"Enter the no:";
    cin>>c;
    if(c==1)
    cout<<add(3,4)<<endl;
    else if(c==2)
    cout<<sub(3.4,2.3);
    else
    cout<<multi(3,5);
    return 0;
}
