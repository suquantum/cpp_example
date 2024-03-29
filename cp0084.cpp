#include <iostream>
#include <string>
using namespace std;

class ClsX{
    private:
        int x;
    public:
        ClsX()              {x = 0;}
        ClsX(int n)         {x = n;}
        void setX(int n)    {x = n;}
        int getX()          {return x;}
        void dispX()        {cout << "x= " << x << '\n';}
};

class ClsXY : public ClsX{
    private:
        int y;
    public:
        ClsXY();
        ClsXY(int n1, int n2);
        void setY(int n);
        int getY();
        void dispXY();
};

ClsXY::ClsXY(){
    setX(0);
    y = 0;
}

ClsXY::ClsXY(int n1, int n2){
    setX(n1);
    y = n2;
}

void ClsXY::setY(int n){
    y = n;
}

int ClsXY::getY(){
    return y;
}

void ClsXY::dispXY(){
    dispX();
    cout << "y= " << y << '\n';
}

int main(){
    ClsXY dt(10, 20);

    cout << "------ using ClsXY\n";
    dt.dispX();
    dt.dispXY();

    cout << "------ using setX, setY\n";
    dt.setX(100);
    dt.setY(200);
    dt.dispXY();

    cout << "------ using getX, getY\n";
    cout << "dt.x=" << dt.getX() << '\n';
    cout << "dt.y=" << dt.getY() << '\n';

    return 0;
}