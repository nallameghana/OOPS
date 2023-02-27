#include<iostream>
using namespace std;
class A
{
	public:
	
        int calc(int a,int b)
	{
		return a + b;
	}
	int calc(int a, int b, int c)
	{
		return a*b*c;
	}
	int calc(int a)
	{
		return float(a)/5;
	}
	int calc(int a, int b, int c, int d)
	{
		return a-b-c-d;
	}
};
int main()
{
A m;
int x, y, w, z;
x = m.calc(10, 20);
y = m.calc(5, 6, 7);
w = m.calc(9);
z = m.calc(5, 7, 9, 0);
cout<<"\nAddn of 2 nos : "<<x;
cout<<"\nMult of 3 nos : "<<y;
cout<<"\nDiv by 5 gives : "<<w;
cout<<"\nsub of 4 given nos : " <<z;
}

