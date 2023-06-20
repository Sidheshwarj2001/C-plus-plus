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
    
        void fun()  // fun(Demo * this )  //non static behaviour 
        {
            cout<<"Inside non static functionn fun"<<"\n";
            cout<<"Value of A"<<this->A<<"\n";
            cout<<"Value of A"<<this->A<<"\n";
            cout<<"Value of X"<<X<<"\n";
            cout<<"Value of Y"<<Y<<"\n";
        }

        static void gun() // Static void gun()  //static behavior
        {
            cout<<"Inside static function gun"<<"\n";
            cout<<"Value of X"<<X<<"\n";
            cout<<"Value of Y"<<Y<<"\n";
            //here wecannot access non static chararctertic
        }

};
//initialization of static characterstics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
   Demo :: gun();  //good programming
   
   Demo obj1;
    obj1.fun(); //fun(&obj1);
    obj1.gun();// bad programming

    return 0;
}