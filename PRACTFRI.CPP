#include<iostream.h>
#include<conio.h>

class XYZ;
class ABC
{
	int a;
	pubic:
	void getA(int a1)
	{
	       a=a1;
	}
	friend int max(ABC A,XYZ X);
};
class XYZ
{
	int x;
	public:
	void getX(int x1)
	{
	     x=x1;
	}
};
void main()
{
	ABC A;
	XYZ X;
	int a,x;
	clrscr();
	cout<<"\nEnter A : ";
	cin>>a;
	cout<<"\nEnter X : ";
	cin>>x;
	A.getA(a);
	X.getX(x);
	cout<<"\nMax is "<<max(A,X);
	getch();
}








