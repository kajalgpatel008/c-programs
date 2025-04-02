#include<iostream.h>
#include<conio.h>

class base
{
	public:
	void display()
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