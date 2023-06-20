#include<iostream>

using namespace std;

class Demo 
{
    public  :
    int No1;
    int No2;

    Demo() //default constructor
    {
        cout<<"Inside Default constructor \n";
        No1= 0;
        No2=0;
    }

    Demo(int A, int B)  //Parametrised constructor
    {
         cout<<"Inside Parametrised constructor \n";
        No1= A;
        No2=B;
    }

    Demo(Demo &ref)     //copy constructor
    {
        cout<<"Inside the copy constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;
    }

    ~Demo()
    {
        cout<<"Inside Destructor\n ";
    }

    void fun()
    {
        cout<<"Inside the fun\n";
    }

    void gun()
    {
        cout<<"Inside the gun\n";
    }  
};

int main()
{
    cout<<"Inside the main\n";
    Demo obj1;

    // obj1.fun();
    // obj1.gun();

    cout<<"Value of No1 from obj1 is : "<<obj1.No1<<"\n";
    
    cout<<"Value of No1 from obj1 is : "<<obj1.No2<<"\n";

    Demo obj2(11,21);

    cout<<"Value of No1 from obj1 is : "<<obj2.No1<<"\n";

    cout<<"Value of No1 from obj1 is : "<<obj2.No2<<"\n";

    Demo obj3(obj2); //

      cout<<"Value of No1 from obj3 is : "<<obj3.No1<<"\n";
    
    cout<<"Value of No1 from obj3 is : "<<obj3.No2<<"\n";

    return 0;
}