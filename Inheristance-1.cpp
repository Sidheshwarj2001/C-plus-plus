#include<iostream>
using namespace std;

//parent class / base class
class Demo
{
    public:
        int A , B;

        Demo()
        {
            A = 11;
            B = 21;
            cout<<"Inside the Demo Constructor"<<"\n";
        }
        void fun()
        {
            cout<<"Inside FUN of Demo"<<"\n";
        }
        ~Demo()
        {
        cout<<"Inside the Destructor of Demo"<<"\n";
        }
};
//Child class
class Hello : public Demo   //class Hello extends Demo  -->Java
{
    public:
        int X,Y;

        Hello()
        {
            X = 100;
            Y = 121;
            cout<<"Inside Hello Constructor"<<"\n";
        }

        void Gun()
        {
            cout<<"Inside the gun of hello"<<"\n";
        }
         ~Hello()
        {
        cout<<"Inside the Destructor of Hello"<<"\n";
        }
};

int main()
{
    Hello hobj; // 
    hobj.fun();
    hobj.Gun();

    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";

    cout<<"Size of hello object is : "<<sizeof(hobj)<<"\n";

    return 0;
}