#include <iostream>
using namespace std;
struct student
{
	char name[30];
	int rollno;
	long int phone_no;
	char coll_name[50];
	char dept[30];
	int cgpa;

};
int main()
{
	student s;
	cout<<"Enter name\nRollno\nPhone no\nCollege name\nDepartment\nCgpa"<<endl;
	cin>>s.name>>s.rollno>>s.phone_no>>s.coll_name>>s.dept>>s.cgpa;
	cout<<"Name : "<<s.name<<"\nRoll no : "<<s.rollno<<"\nPhone no : "<<s.phone_no<<"\nCollege Name : "<<s.coll_name<<
		"\nDepartment : "<<s.dept<<"\nCgpa : "<<s.cgpa;
       return 0;	
}
