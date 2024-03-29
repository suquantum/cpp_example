#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;
public:
    Person(string s, int n);
    void setname(string s);
    void setage(int n);
    void disp();
};

Person::Person(string s, int n){
    name = s;
    if (n < 0) age = 0;
    else age = n;
}
void Person::setname(string s){
    name = s;
}
void Person::setage(int n){
    if (n < 0) age = 0;
    else age = n;
}

void Person::disp(){
    cout << "name=" << name << " age=" << age << '\n';
}

int main()
{
    Person dt("Schun Uechi", 55);
    dt.disp();
    return 0;
}