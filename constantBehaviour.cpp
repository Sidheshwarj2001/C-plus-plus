#include <iostream>
using namespace std;

class Demo
{
public:
    int A, B;
    const int X;
    const int Y;

    Demo() : X(10), Y(11)
    {
        A = 0;
        B = 0;
    }

    Demo(int i, int j, int k, int l) : X(k), Y(l)
    {
        A = i;
        B = j;
    }

    void Fun()
    {
        A++;
        B++;
        // X++; //not alllowed
        // Y++; // not Allowed
    }

    void Gun() const
    {
        // A++;  // not allowed
        // B++; // not allowed
        // X++; // not allowed
        // Y++; // not allowed
    }
};

int main()
{
    Demo obj1(11, 21, 51, 101);
    const Demo obj2(11, 21, 51, 101);

    obj1.Fun();
    obj1.Gun();

    // obj2.Fun(); //Not allowed beacuse constant object call only contant behaviour
    obj2.Gun();

    return 0;
}