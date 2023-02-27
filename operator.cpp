#include <iostream>
using namespace std;
class A
{
	public:
	int a;

	A(int k)
	{
		a = k;
	}


	void operator+(A l)
	{
		int x;
		x =  a - l.a;
		cout <<"Subtraction of 2 given nos : " <<x;
	}
};
int main()
{
	A m(10);
	A n(5);
        m + n;
    return 0;
}

	


