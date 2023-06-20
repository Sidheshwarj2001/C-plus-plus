#include<iostream>
using namespace std;

class Demo
{
    public : 

        int Addition(int No1,int No2 ,int No3)   //Addition@3iii
        {
            cout<<"Addition of 2 interrger is  : "<<"\n";
            return No1+ No2 + No3;
        }

        float Addition(float No1,float No2)     //Addition@2ff
        {
            cout<<"Addition of 2 float is  : "<<"\n";
            return No1+ No2;
        }

        double Addition(double No1,double No2) //Addition@2dd
        {
            cout<<"Addition of 2 Double is  : "<<"\n";
            return No1+ No2;
        }        
};

int main()
{
    Demo obj;
    int iRet = obj.Addition(10,11,10); //Addition@3iii(&obj10,11,10)
    cout<<iRet<<'\n';

    float fRet = 0.0f; 
    fRet = obj.Addition(10.5f,90.7f); // Addition2ff(&obj , 10.5,90.7)
    cout<<fRet<<'\n';


    double dRet = 0.0;
    dRet = obj.Addition(10.5 , 90.7);           //Addition@2dd(&obj , 10.5 , 90.7)

    cout<<dRet<<'\n';


    return 0;
}