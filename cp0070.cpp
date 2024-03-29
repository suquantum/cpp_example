#include <iostream>
#include <string>
using namespace std;

struct Meibo {
    string name;
    int height;
    int weight;
};

int main()
{
    Meibo a, b;

    a.name = "John Doe";
    a.height = 180;
    a.weight = 80;

    b = a;

    cout << a.name << " " << a.height << " " << a.weight << '\n';
    cout << b.name << " " << b.height << " " << b.weight << '\n';

    return 0;
}