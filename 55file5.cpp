#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    fstream addfile;
    addfile.open("addfile.a",ios::out);
    cout<<"Enter the no:";
    cin>>a;
    cout<<a<<endl;
    cout<<"Enter the b no:";
    cin>>b;
    cout<<b<<endl;
    if(!addfile)
    {
        cout<<"file is failed:";
    }
    else
    {
        cout<<"file is creat:";
        
        addfile<<"sum of="<<a+b;
        addfile.close();
    }
    return 0;
}
