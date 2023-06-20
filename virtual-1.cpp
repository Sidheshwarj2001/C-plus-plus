#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;

    void Fun() // 1000
    {
        cout<<"Inside Fun of Base class"<<"\n";
    }
    void Gun() // 2000
    {
        cout<<"Inside Gun of Base class"<<"\n";
    }
    void Sun() // 3000
    {
        cout<<"Inside Sun of Base class"<<"\n";
    }
};

class Derived : public Base
{
    public:
    int X,Y;

     void Fun() // 4000
    {
        cout<<"Inside Fun of Derived class"<<"\n";
    }
    void Gun() // 5000
    {
        cout<<"Inside Gun of Derived class"<<"\n";
    }
    void Sun() // 6000
    {
        cout<<"Inside Sun of Derived class"<<"\n";
    }

};

int main()
{
    cout<<"Size of Base is : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived is : "<<sizeof(Derived )<<"\n";

    Base *bp =  new Base; //no casting
    Derived *dp = new Derived; // No casting

    Base *dp1 = new Derived; //up casting (Allowed)
    // Derived *dp1 = new Base; // Down casting (No Allowed)

    // Derived Dobj;

    // Dobj.Fun();
    // Dobj.Gun();
    // Dobj.Sun();
   
    return 0;
}