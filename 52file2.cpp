#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("new_file.txt",ios::in);
    if(!new_file)
    {
        cout<<"no such file";
    } 
    else
    {
        // char ch;
        // while(!new_file.eof())
        // {
        //  new_file>>ch;
        //  cout<<ch;
        // }
         char ch;
        while (new_file.get(ch)) { // Read character and check if it's successful
            cout << ch;
        }
    }
    new_file.close();
    return 0;
}
