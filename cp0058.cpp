#include <iostream>
using namespace std;

void sub();

int g = 100;

int main()
{
    int a = 200;

    cout << "g=" << g << '\n';
    cout << "a=" << a << '\n';

    sub();

    return 0;
}

void sub()
{
    int b = 300;
    cout << "g=" << g << '\n';
    cout << "a is not defined in this function" << '\n';
    cout << "b=" << b << '\n';
}