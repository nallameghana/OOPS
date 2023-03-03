//Friend class and friend fuctions
//A class can have more than 1 friend function.
//Dont use many friend functions to maintain encapsulation of that class.
//Friend classes are not mutual so be careful.
//When we inherit a base class thst has friend class/function then that friend class/function is not inherited.
#include<iostream>
using namespace std;
class Square
{
    int a;
    int peri;
    int area;
    public:
    void geta()
    {
        cout<<"\nEnter side : ";
        cin>>a;
        peri = 4*a;
        area = a*a;
    }
    friend void display(Square);    //Friend function.
    friend class print;     //Friend class.
    
};
void display(Square m)
{
    cout<<"\nPerimeter : "<<m.peri;
    cout<<"\nArea : "<<m.area;
}
class print
{
    public:
    void printp(Square m)
    {
    cout<<"\nPerimeter : "<<m.peri;
    cout<<"\nArea : "<<m.area;
    }
};
int main()
{
    Square m;
    m.geta();
    display(m);
    print p;
    p.printp(m);
  return 0;
}