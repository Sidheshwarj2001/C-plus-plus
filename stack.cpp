#include<iostream>
using namespace std;

int Addition(int A , int B)
{
    int Ans = 0;
    Ans = A + B;
    return Ans;
}

int main()
{
    int No1 = 10 , No2 = 30;
    int Ret = 0;

    Ret = Addition(No1,No2);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}