#include <iostream>
#include <string>
using namespace std;
int main()
{
	char m;
	cout<<"\nEnter a character : ";
        cin.get(m);
	cout<<"\nEntered character is : ";
	cout.put(m);
	string s1;
	cout<<"\nEnter a string : ";
	getline(cin,s1);
        cout<<"\nEntered string is : ";
	cout<<s1;

    return 0;
}
