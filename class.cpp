#include <iostream>
using namespace std;
class calc
{
	public:
		int a = 5;
		int b = 10;
		int add()
		{
			return a + b;
		}
		int sub()
		{
			return b - a;
		}
		int mult()
		{
			return a*b;
		}
		int div()
		{
			return (float)a/b;
		}
};
int main()
{
	calc c, *ptr;
	ptr = &c;
	int m;
	m = ptr->mult();
	cout<<"Mulitplication of a and b is : "<<m;
    return 0;
}
