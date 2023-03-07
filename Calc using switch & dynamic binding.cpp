#include <iostream>
using namespace std;
class calculator
{
    public:
    virtual void calc(int a, int b) = 0;
};
class add : public calculator
{
    public:
    void calc(int a, int b)
    {
        cout<<"\nThe sum of 2 given nos is : "<<a+b;
    }
};
class sub : public calculator
{
    public:
    void calc(int a, int b)
    {
        cout<<"\nSubtraction of 2 given nos is : "<<a-b;
    }
};
class mult : public calculator
{
    public:
    void calc(int a, int b)
    {
        cout<<"\nMultiplication of 2 given nos is : "<<a*b;
    }
};
class divi : public calculator
{
    public:
    void calc(int a, int b)
    {
        cout<<"\nDivision of 2 given nos is : "<<(float)a/b;
    }
};
int main()
{
    calculator *m;
    char ch;
    int n1, n2;
    cout<<"\nEnter 2 nos : ";
    cin>>n1>>n2;
    cout<<"\nEnter operator(+,-,*,/) : ";
    cin>>ch;
    switch(ch)
    {
        case '+' : m = new add;
                   m->calc(n1, n2);
                   break;
        case '-' : m = new sub;
                   m->calc(n1, n2);
                   break;
        case '*' : m = new mult;
                   m->calc(n1, n2);
                   break;
        case '/' : m = new divi;
                   m->calc(n1, n2);
                   break;
        default  : cout<<"\nInvalid choice!!";
                   
    }
    
}
    
    
    
    
    
    
    
    
