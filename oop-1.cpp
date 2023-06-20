// class  = characterstics + Behaviours
// class =  Data + function 
#include<iostream>
using namespace std;

class Demo
{
    public:  //Access specifier
    int No1;
    int No2;

    void fun()
    {
        cout<<"Inside Fun\n";
    }
};

int main()
{
   Demo obj1;
   Demo obj2;

   cout<<"size of Demo is :"<<sizeof(obj1)<<"\n"; // 8

    obj1.No1 =  11;
    obj1.No2=10;

    obj2.No1 = 21;
    obj2.No2 = 20; 
    
    obj1.fun(); //Inside the fun

    cout<<obj1.No2<<"\n";// 10
    return 0;
}