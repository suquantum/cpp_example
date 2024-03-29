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
    Meibo* p = &b;

    a.name = "John Doe";
    a.height = 180;
    a.weight = 80;

    p->name = "Jane Doe";
    p->height = 160;
    p->weight = 50;

    cout << a.name << " " << a.height << " " << a.weight << '\n';
    cout << p->name << " " << p->height << " " << p->weight << '\n';

    return 0;
}