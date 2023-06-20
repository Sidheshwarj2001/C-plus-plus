#include<iostream>

using namespace std;

int main()
{
    int No = 11;
    int &X = No;

    cout<<X << "\n";
    cout<<No;

    return 0;
}