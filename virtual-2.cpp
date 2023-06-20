#include <iostream>
using namespace std;

class Base
{
public:
    int A, B;

    virtual void Fun() // 1000
    {
        cout << "Inside Fun of Base class"
             << "\n";
    }
    virtual void Gun() // 2000
    {
        cout << "Inside Gun of Base class"
             << "\n";
    }
    virtual void Sun() // 3000
    {
        cout << "Inside Sun of Base class"
             << "\n";
    }
};

class Derived : public Base
{
public:
    int X, Y;

    void Fun() // 4000
    {
        cout << "Inside Fun of Derived class"
             << "\n";
    }
    

    virtual void Sun() // 6000
    {
        cout << "Inside Sun of Derived class"
             << "\n";
    }

    virtual void Run() // 7000
    {
        cout << "Inside Run of Derived class"
             << "\n";
    }
};

int main()
{
    cout<<"Size of Base is : "<<sizeof(Base)<<"\n";     //12
    cout<<"Size of Derived is : "<<sizeof(Derived )<<"\n";      // 20
    Base *bp = new Derived; // up casting (Allowed)

    bp->Fun(); //Derived fun
    bp->Gun(); //Base Gun
    bp->Sun(); //Derived Sun
    // bp->Run(); // throwing Error  

    return 0;
}