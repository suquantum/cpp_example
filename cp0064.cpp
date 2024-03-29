#include <iostream>
using namespace std;
void func();

int dt = 999;

int main()
{
    int a;
    int* p;

    a = 123;
    p = &a;

    cout << "a :" << a << '\n';
    cout << "&a:" << &a << '\n';
    cout << "p :" << p << '\n';
    cout << "*p:" << *p << '\n';
    cout << "&p:" << &p << '\n';

    return 0;
}