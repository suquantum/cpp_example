#include <iostream>
using namespace std;
void func();

int dt = 999;

int main()
{
    int a = 125, b;
    int* p;

    p = &a;
    b = *p;

    cout << "a=" << a << " *p=" << *p << " b=" << b << '\n';

    return 0;
}