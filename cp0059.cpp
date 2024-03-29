#include <iostream>
using namespace std;
void func();

int main()
{
    int a;

    a = 1111;
    cout << "main a = " << a << '\n';
    func();
    cout << "main a = " << a << '\n';

    return 0;
}

void func()
{
    int a;

    a = 2222;
    cout << "func a = " << a << '\n';
}