#include<iostream>
using namespace std;

class Arithematic
{
    private:
    int No2;
    int No1;

    public:
      Arithematic()
        {
            No1 = 0;
            No2 = 0;
        }

        Arithematic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

         int subtraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        } 
};

int main()
{
    Arithematic obj1(10,7);
    Arithematic obj2 ;

    int Ret = 0;
    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj1.subtraction();
    cout<<"Subtraction is : "<<Ret<<"\n";
    
      Ret = obj2.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj2.subtraction();
    cout<<"Subtraction is : "<<Ret<<"\n";

    return 0;
}