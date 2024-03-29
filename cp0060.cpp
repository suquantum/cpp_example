#include <iostream>
using namespace std;
void func();

int dt = 999;

int main()
{
    int dt = 100;

    cout << "main dt = " <<   dt << '\n';
    cout << "  :: dt = " << ::dt << '\n';

    return 0;
}