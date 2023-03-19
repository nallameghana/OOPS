//Parametrised constructor
#include <iostream>
using namespace std;
class Base
{
    public:
    int a = 10;
    int b = 5;
    void sum()
    {
        cout<<"\nSum : "<<a+b;
    }
};
class Der1 : public Base
{
    public:
    void sub()
    {
        cout<<"\nDifference of 2 nos : "<<a-b;
    }
};
class Der2 : public Base
{
    public:
    void mult()
    {
        cout<<"\nMultiplication of 2 nos : "<<a*b;
    }
};
int main()
{
    Der1 d1;
    Der2 d2;
    d1.sub();
    d2.mult();
  return 0;
}
