#include <iostream>
using namespace std;

class Animal
{
public:
    string a, b;
    void input()
    {
        cout << "Enter the numbers a and b: ";
        cin >> a >> b;
    }
};

class derive : public Animal
{
public:
    string c;
    void input1()
    {
        cout << "Enter the number c: ";
        cin >> c;
    }
    void output()
    {
        cout << "\n a output: " << a;
        cout << "\n b output: " << b;
        cout << "\n c output: " << c;
    }
};

int main()
{
    derive obj;
    obj.input();
    obj.input1();
    obj.output();
    return 0;
}
