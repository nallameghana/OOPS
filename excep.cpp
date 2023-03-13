#include <iostream>
using namespace std;
int main()
{
	int no, fact = 1;
	cout<<"\nEnter a no : ";
	cin>>no;
	try
	{
            if(no > 0) 
	    {
		    
         	for(int i = 1; i <= no; i++)
	        {
		     fact = fact * i;
	        }
		cout<<"\nFactorial of given no is : "<<fact;
	    }
	    else if(no == 0)
	    {
		    cout<<"\nFactorial of 0 is 1";
	    }
	    else
	    {
		    throw no;
	    }
	}
	catch(int x)
	{
		cout<<"\nFactorial of a negative no is not defined";
	}
}


