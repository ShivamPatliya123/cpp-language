#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("afile.data");
    cout<<"writing to the file"<<endl;
    cout<<"Enter your name:";
    cin.getline(data,100);
    outfile<<data<<endl;
    cout<<"Enter your age:";
    cin>>data;
    outfile<<data<<endl;
    outfile.close();

    //open file in read mode.
    ifstream infine;
    infine.open("afile.dat");
    cout<<"Reading from the file:"<<endl;
    infine>>data;
    cout<<data<<endl;
    infine.close();
    return 0;
}
