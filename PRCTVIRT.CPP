#include<iostream.h>
#include<conio.h>

class Base
{
	public:
	virtual void show()
		{
			cout<<"\nShow from Base class";
		}
};
class Derived:public Base
{
	public:
		void show()
		{
			cout<<"\nShow from derived class";
		}
};
void main()
{
	Base *bt;
	Base b;
	Derived d;
	clrscr();
	bt=&b;
	bt->show();
	bt=&d;
	bt->show();
	getch();
}


