#include <iostream>
#include <string>

using namespace std;

int main()
{
    int dt;
    string ss;

    dt=1;
    ss="hello";

    cout << "数値の入力: ";
    cin >> dt;
    cout << "文字列入力: ";
    cin >> ss;

    cout << "数値は " << dt << "です\n";
    cout << "文字列は " << ss << "です\n";

    return 0;
}