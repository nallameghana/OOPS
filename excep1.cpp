#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"\nEnter a and b values : ";
	cin>>a>>b;
	try 
	{
	   if(b != 0)
	   {
	      cout<<"\ndiv of a/b gives : "<<(float)a/b;
	   }
	   else if(b == 0)
	   {
		   throw b;
	   }
	}
	catch(int x)
	{
		cout<<"\nDivision by zero is not defined";
	}
   return 0;
}
