#include <iostream>

using namespace std;

int main()
{
    int dt;

    cout << "Input number: ";
    cin >> dt;

    if (dt >= 10 && dt <= 20)
        cout << "The input number is between 10 to 20\n";

    if (dt == 10 || dt == 20)
        cout << "The input number is 10 or 20\n";

    if (!(dt == 10 || dt == 20))
        cout << "The input number is neither 10 or 20\n";

    return 0;
}