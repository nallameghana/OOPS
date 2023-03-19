//Parametrised constructor
#include <iostream>
using namespace std;
class A
{
    public:
    A(int a, int b)
    {
        cout<<"Sum : "<<a+b;
    }
    void greet()
    {
        "Hi, This is from greet function ";
    }
};
int main()
{
    A m(10, 80);
  return 0;
}
