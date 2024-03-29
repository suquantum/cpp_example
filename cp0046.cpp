#include <iostream>

using namespace std;

double average(double x, double y);

int main()
{
    double a, b, ave;

    cout << "input a =>";
    cin >> a;
    cout << "input b =>";
    cin >> b;

    ave = average(a, b);

    cout << "a= " << a << " and " << "b= "<< b << "\n";
    cout << "average=" << ave;
    cout << "\n";

    return 0;
}

double average(double x, double y)
{
    double z;
    z = (x + y) / 2.0;
    return z;
}