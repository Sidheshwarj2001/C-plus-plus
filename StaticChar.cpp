#include<iostream>
using namespace std;

class Demo
{
        public:
        int A,B;        //non static characterstics
        static int X , Y; //static characterrstic

        Demo(){ //Default constructor
        //initialization of non static characterstics
            A = 0; 
            B = 0;
        }
};

//initialization of static characterstics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    cout<<"Value of X is : "<<Demo::X<<"\n";
    cout<<"Value of Y is : "<<Demo::Y<<"\n";  

    Demo obj1;
    Demo obj2;

    cout<<"Value of A from obj1: "<<obj1.A<<"\n";
    cout<<"Value of B  from obj1 : "<<obj1.B<<"\n";

    cout<<"Size of Demo class object is:  "<<sizeof(obj1)<<'\n';

    return 0;
}