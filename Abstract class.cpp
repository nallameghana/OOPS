//Abstract class : If a class has atleast 1 pure virtual function it is said to be abstract class
//It hides all the unwanted complex code to the user and shows nessasary info ex:
//If derived class doesn't provide the implementation for the pure virtual functions then that class also becomes abstract class.
#include <iostream>
using namespace std;
class Basicphone
{
    public:
    virtual void selfie() = 0;
    virtual void appstore() = 0;
};
class android : public Basicphone
{
    public:
    void selfie()
    {
        cout<<"Android selfie";
    }
    void appstore()
    {
        cout<<"Download app from playstore";
    }
};
class iphone : public Basicphone
{
    public:
    void seflie()
    {
        cout<<"Iphone selfie";
    }
    void appstore()
    {
        cout<<"Download app from istore";
    }
};
int main()
{
    Basicphone *p = new android;
    p->appstore();
  return 0;
}
