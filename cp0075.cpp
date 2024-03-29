#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void disp();
};

void Person::disp()
{
    cout << "name=" << name << " age=" << age << '\n';
}

int main()
{
    Person dt;

    dt.name = "Schun Uechi";
    dt.age = 30;
    dt.disp();

    return 0;
}