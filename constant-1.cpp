#include<iostream>
using namespace std;

class Demo
{
    public :
        int A; 
        int B;
        const int C;
        const int D;

        // Throwing Error - > not posible
        // const int c = 10;
        // const int D = 11;

        Demo()  : C(11) , D(21) //member initialization List
        {
            A = 0;
            B = 0;
            
            // Throwing Error - > not posible

            // C = 11;
            // D = 10;
        }

        Demo(int i , int j , int k , int l) : C(k) , D(l) //member initialization List
        {
            A = i;
            B =j ;
         
        }
        
        //This also Possible but Avoid it ;;;;;;;;;;;;;;;;

        // Demo(int i , int j , int k , int l) : A(i), B() , C(k) , D(l) //member initialization List
        // {
        //     A = i;
        //     B =j ;
        // }
};

int main()
{
    Demo Dobj1;
    Demo Dobj2(11,21,51,101);

    cout<<Dobj1.A<<"\n";
    cout<<Dobj1.B<<"\n";
    cout<<Dobj1.C<<"\n";
    cout<<Dobj1.D<<"\n";

    cout<<Dobj2.A<<"\n";
    cout<<Dobj2.B<<"\n";
    cout<<Dobj2.C<<"\n";
    cout<<Dobj2.D<<"\n";

    return 0;
}