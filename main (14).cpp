//Hybrid Inheritance

#include <iostream>
using namespace std;
class base
{
    public:
    void instrument()
    {
        cout<<"Violin";
        cout<<"\nThis is from base class";
    }
};
class derived1 : virtual public base
{
    public:
    void instrument1()
    {
        cout<<"Guitar";
    }
};
class derived2 : virtual public base
{
    public:
    void instrument2()
    {
        cout<<"Piano";
    }
};
class child : public derived1,
              public derived2
{
    public:
    void func()
    {
        cout<<"hi";
    }
};
int main()
{
    child ptr;
    ptr.instrument1();
  return 0;
    
}