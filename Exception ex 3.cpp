#include <iostream>
using namespace std;
int main()
{
	int i, a[4] = {1, 5, 7, 9};
	cout<<"\nEnter index of element to be accessed : ";
	cin>>i;
	try
	{
	    if(i < 4 && i >= 0) cout<<"\na[i] = "<<a[i];
	    else  throw i;
	}
	catch(int i)
	{
		cout<<"\nArray index out of bound";
	}
  return 0;
}
