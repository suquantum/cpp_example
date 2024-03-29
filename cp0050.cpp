#include <iostream>
#include <string>
using namespace std;

void dispstr(string s);
string addparen(string s);

int main()
{
    string ss = "hello", ss2;

    dispstr(ss);
    dispstr("world");

    ss2 = addparen(ss);
    cout << "ss2= " << ss2 << '\n';

    return 0;
}

void dispstr(string s)
{
    cout << "in void" << '\n';
    cout << s << '\n';
}

string addparen(string s)
{
    string wkss;
    wkss = "(" + s + ")";
    return wkss;
}