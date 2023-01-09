#include <iostream>
using namespace std;
class student
{
	public:
		char name[50];
		int roll_no;
		int marks;
	public:
		void stu_details()
		{
			cout<<"\nEnter details\nName\nRoll_no\nmarks"<<endl;
			cin>>name>>roll_no>>marks;
			cout<<"\nName : "<<name<<"\nRollno : "<<roll_no<<"\nGrade : "<<marks;
		}

};
int main()
{
      student s[3];
      cout<<"\nDetails of student 1\n ";
      s[0].stu_details();
      cout<<"\nDetails of student 2 \n";
      s[1].stu_details();
      cout<<"\nDetails of student 3 \n";
      s[2].stu_details();
    return 0;
}



