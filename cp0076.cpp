#include <iostream>
#include <string>
using namespace std;

class Person{
/*
public:
    string name;
    int age;
*/
private:
    string name;
    int age;
public:
    void setname(string s);
    void setage(int n);
    void disp();
};

void Person::setname(string s){
    name = s;
}

void Person::setage(int n){
    if (n < 0) age = 0;
    else age = n;
}

void Person::disp(){
    cout << "name=" << name << "age=" << age << '\n';
}


int main()
{
    Person dt;

    /*
    dt.name = "Schun Uechi";
    dt.age = 30;
    dt.disp();
    */

    dt.setname("Schun Uechi");
    dt.setage(30);
    dt.disp();
    return 0;
}