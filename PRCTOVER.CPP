#include<iostream.h>
#include<conio.h>

class Base
{
	public:
		void show()
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
	Derived d;
	clrscr();
	d.show();
	getch();
}








