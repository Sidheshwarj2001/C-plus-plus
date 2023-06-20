#include<iostream>
// using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
         int A;
         int B;

         Demo(int i = 10 ,int j = 20 )
         {
            A = i;
            B = j;
            std::cout<<"Inside the namespace Marvellous";
         }
    };
}

namespace Infosystem
{
    class Demo
    {
        public:
         int A;
    };
}

using namespace Marvellous;

int main()
{
    // Marvellous::Demo obj1;
    Marvellous::Demo obj1;

    std::cout<<"Inside the main";

    Infosystem::Demo obj2;

    return 0;
}