//when virtual keyword is used in base class the class derived from the base class if it has same function
//that function overrides the function in base class so that more specific implementation can be done.
#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void speak()
    {
        cout<<"Depends on the animal";
    }
};
class Dog : public Animal{
    public:
    void speak()
    {
        cout<<"Bow";
    }
};
class Cat : public Animal
{
    public:
    void speak()
    {
        cout<<"Meow";
    }
};
int main()
{
    Animal *p = new Cat();      // dynamic object of cat using pointer to animal class
    p->speak();
}