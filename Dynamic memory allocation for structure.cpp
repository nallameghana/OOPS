#include <iostream>
using namespace std;
typedef struct student
{
    string name;
    int rollno;
}student;
int main()
{
    student *ptr = new student;
    cin>>ptr->name;
    cin>>ptr->rollno;
    cout<<"\nName : "<< ptr->name<<endl;
    cout<<"Rollno : "<<ptr->rollno<<endl;
  return 0;
}
