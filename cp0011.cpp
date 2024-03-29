#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char ss[4];

    ss[0] = 'A';
    ss[1] = 'B';
    ss[2] = 'C';
    ss[3] = 'D';

    cout << ss << '\n';

    strcpy(ss, "abc");

    cout << ss[0] << '\n';
    cout << ss[1] << '\n';
    cout << ss[2] << '\n';


    return 0;
}