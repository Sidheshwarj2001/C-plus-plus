#include <iostream>
using namespace std;

float Area(float Redius, float PI = 3.14f)
{
    float Result = 0.0f;

    Result = PI * Redius * Redius;

    return Result;
}

int main()
{
    float R = 0.0f;
    float fRet = 0.0f;

    cout << "Enter the Redius : "<< "\n";
    cin >> R;

    fRet = Area(R,5.14f);

    cout << "Area of circle is  : " << fRet <<"\n";


    fRet = Area(R);

    cout << "Area of circle is  : " << fRet <<'\n';

    return 0;
}