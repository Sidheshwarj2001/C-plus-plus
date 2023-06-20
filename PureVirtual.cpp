#include <iostream>
using namespace std;

// abtract class : it is class which contain at least single pure virtual function

class Base
{
public:
    int A, B;
    // 1000
    int Addition(int i, int j) // Concrete function
    {
        return i + j;
    }

    // 2000
    virtual int subtraction(int i, int j) // Concreate function
    {
        return i - j;
    }

    virtual int Multiplication(int i, int j) = 0; // Abstract Function
};

class Derived : public Base
{
public:
    int x, y;

    // 3000
    int subtraction(int i, int j) // concrete function
    {
        int Ans = 0;
        Ans = i - j;

        return Ans;
    }
    // 4000
    int Multiplication(int i, int j) // concrete function
    {
        return i * j;
    }
};

int main()
{
    // Base bobj ; // Not Allowed

    Base *bp = new Derived();

    int Ret = 0;

    Ret = bp->Addition(10, 11);              // Base Addition function called
    cout << "Addition is : " << Ret << "\n"; // 21

    Ret = bp->subtraction(10, 11);              // Derived Suntraction function callded
    cout << "subtraction is : " << Ret << "\n"; // -1

    Ret = bp->Multiplication(10, 11);             // Derived Multiplication called
    cout << "Multipication is : " << Ret << "\n"; // 110

    return 0;
}