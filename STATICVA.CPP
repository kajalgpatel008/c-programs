#include<iostream.h>
#include<conio.h>

class StaticVariable
{
	static int a;
	public:
	void setValue()
	{
		cout<<"\nEnter A : ";
		cin>>a;
	}
	void printValue()
	{
		cout<<"\nA : "<<a;
	}
};
int StaticVariable::a;
void main()
{
	StaticVariable s1,s2,s3;
	clrscr();
	s1.setValue();
	s2.setValue();
	s3.setValue();
	s1.printValue();
	s2.printValue();
	s3.printValue();
	getch();
}












