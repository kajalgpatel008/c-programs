#include<iostream.h>
#include<conio.h>
class Base
{
	public:
	void Display()
	{
		cout<<"\nDisplay From Base Class";
	}
	virtual void show()=0;
};
class Derived:public Base
{
	public:
	void show()
	{
		cout<<"\nShow From Derived Class";
	}
	void display()
	{
		cout<<"\nDisplay From Derived Class";
	}
};
void main()
{
	Derived d;
	clrscr();
	d.show();
	d.display();
	getch();
}





