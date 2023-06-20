#include<iostream>
using namespace std;

int strlenX(char *str)    //strlenX(char *str)
{
    // cout<<*str<<"\n";
    // cout<<str<<"\n";
    // cout<<&str<<"\n";

    int icnt = 0;
    while( *str != '\0')
    {
        icnt++;
        str++; 
    }
    return icnt;

}

int main()
{

    char Arr[20];
    int iRet = 0;

    cout<<"Enter your first name"<<"\n";
    cin>>Arr;

    iRet = strlenX(Arr);

    cout<<"Length of name is : "<<iRet<<"\n";

    return 0;
}