#include <iostream>
using namespace std;

// parent class / base class
class Demo
{
public:
    int A, B;

    Demo()
    {
        A = 11;
        B = 21;
        cout << "Inside the Demo Constructor"
             << "\n";
    }
    void fun()
    {
        cout << "Inside FUN of Demo"
             << "\n";
    }
    ~Demo()
    {
        cout << "Inside the Destructor of Demo"
             << "\n";
    }
};

class Hello
{
public:
    int X, Y;

    Hello()
    {
        X = 100;
        Y = 121;
        cout << "Inside Hello Constructor"
             << "\n";
    }

    void Gun()
    {
        cout << "Inside the gun of hello"
             << "\n";
    }
    ~Hello()
    {
        cout << "Inside the Destructor of Hello"
             << "\n";
    }
};
class PPA : public Hello , public Demo

{
public:
    int P, Q;

    PPA()
    {
        P = 10;
        Q = 11;
        cout << "Inside PPA Constructor"
             << "\n";
    }

    void Sun()
    {
        cout << "Inside the Sun of hello"
             << "\n";
    }
    ~PPA()
    {
        cout << "Inside the Destructor of PPA"
             << "\n";
    }
};
int main()
{
    cout << "\n Inside main \n\n";

    cout << "Size of Demo is :  " << sizeof(Demo) << "\n\n";
    cout << "Size of Hello is :  " << sizeof(Hello) << "\n\n";
    cout << "Size of PPA is :  " << sizeof(PPA) << "\n\n";

    PPA pobj;

    cout << pobj.A << "\n";
    cout << pobj.B << "\n";
    cout << pobj.X << "\n";
    cout << pobj.Y << "\n";
    cout << pobj.P << "\n";
    cout << pobj.Q << "\n";

    pobj.fun();
    pobj.Gun();
    pobj.Sun();

    cout << "Size of hello object is : " << sizeof(pobj) << "\n\n";

    cout << "\nEnd of main \n\n";

    return 0;
}