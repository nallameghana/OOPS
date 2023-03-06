#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int rollno;
	string department;
	int cgpa;
        void get_data()
	{
			cin>>name>>rollno>>department>>cgpa;
	}
	void display_data()
	{
			cout<<"\nName : "<<name<<"\nRollno : "<<rollno<<"\nDepartment : "<<department<<"\nCgpa : "<<cgpa;
	}
};
int main()
{
	int no;
	cout<<"\nEnter no of students : ";
	cin>>no;
	student s[no], *ptr;
	ptr = s;
	for(int i = 0; i < no; i++)
	{
		cout<<"\nEnter the details of student(name, rollno, department, cgpa) : "<<i+1;
		(ptr + i)->get_data();
	}
	for(int j = 0; j < no; j++)
	{
		cout<<"\nDetails of student : "<<j+1;
		(ptr + j)->display_data();
	}
    return 0;
}
