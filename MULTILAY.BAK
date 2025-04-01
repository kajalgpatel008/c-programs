#include<iostream.h>
#include<conio.h>

class A

{
	int a;
	public:
		void getA()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		void putA()
		{
			cout<<"\nA : "<<a;
		}
};
class B:public A
{
	int b;
	public:
		void getB()
		{
			cout<<"\nEnter B : ";
			cin>>b;
		}
		void putB()
		{
			cout<<"\nB : "<<b;
		}
};
class C:public B
{
	int c;
	public:
		void getC()
		{
			cout<<"\nEnter C : ";
			cin>>c;
		}
		void putC()
		{
			cout<<"\nC : "<<c;
		}
};
void main()
{
	B b1;
	C c1;
	clrscr();
	b1.getA();
	b1.getB();
	c1.getC();
	b1.putA();
	b1.putB();
	c1.putC();
	getch();
}


