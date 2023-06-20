#include<iostream>
using namespace std;

class Demo
{
    public:

    void Fun() // 1000 From text section
    {
        cout<<"Inside the fun ";
    }

    void Gun() // 1000 From text section
    {
        cout<<"Inside the fun ";
    }

};

int main()
{
    Demo dobj;
    cout<<"Size of empty class is : "<<sizeof(dobj);

    dobj.Fun(); //CALL 1000
    dobj.Gun() //CALL 2000
    return 0;
}