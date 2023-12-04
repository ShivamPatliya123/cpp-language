#include<iostream>
using namespace std;
int main()
{
    int n=575;
    int r; 
        cout<<"100 rupe note :"<<n/100<<endl;
        r=n%100;
        cout<<"50 rupe note:"<<r/50<<endl;
        r=r%50;
        cout<<"20 rupe note:"<<r/20<<endl;
        r=r%20;
        cout<<"10 rupe note:"<<r/10<<endl;
        r=r%10;
        cout<<"5 rupe note:"<<r/5<<endl;
        r=r%5;
        cout<<"1 rupe note:"<<r/1<<endl;
        r=r%1;
    return 0;
}
