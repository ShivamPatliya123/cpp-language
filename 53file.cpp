#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new_file.txt",ios::out);
    if(!new_file)
    {
        cout<<"file creation failed";
    }
    else{
        cout<<"new file created";
        new_file<<2+5<<endl;
        new_file<<2*4;
        new_file.close();
    }
    return 0;
}
