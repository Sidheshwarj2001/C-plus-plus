#include<iostream>
using namespace std;

class Demo
{
    public:
    int No2;
    int No1;

    Demo(int i ,  int j)
    {
        No1 = i;
        No2 = j;
    }
     void Fun(int A, int B) //Void Fun(Demo *this ,int  A , int B)
     {
        cout<<"Inside Fun"<<this->No1<<"\n";
        cout<<"Inside Fun"<<this->No2<<"\n";
     }


     void Gun(int A) //Void Gun(Demo * this , int A)
     {
              cout<<"Inside Gun"<<this->No1<<"\n";
              cout<<"Inside Gun"<<this->No1<<"\n";
     }
};

int main()
{
    Demo obj1(10,20);
    Demo obj2(51,101);


    obj1.Fun(11,21);    //Fun(&obj1,11,21);             // Fun(100,11 21)
    obj2.Gun(10);       //Gun(&obj2 11 )            //Gun(200,10)


    return 0;
}