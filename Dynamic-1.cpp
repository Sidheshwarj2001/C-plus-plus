#include<iostream>
using namespace std;

class Demo
{
    public:
    int  A,B;

    Demo()
    {
        cout<<"Inside the default constrructor "<<"\n";
    }

    Demo(int i ,int j)
    {
        cout<<"Inside parameterised constructor"<<"\n";
    }

    ~Demo()
    {
        cout<<"Inside Destructor"<<"\n";
    }
};

int main()
{
    cout<<"Inside of main"<<'\n'; 

    Demo obj1;  //static memory allocation of memory
    Demo obj2(11,21);    //static memory allocation of memory

    Demo *p = new Demo();   //Dynamic memory allocation of object
    Demo *q = new Demo(11,21);  //Dynamic memory allocation of object

    delete p;
    delete q;

    cout<<"End of main"<<'\n';
    return 0;
}