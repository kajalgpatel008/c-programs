#include<iostream.h>
#include<conio.h>
class StaticVariable
{
	static int a;
	public:
	void getValue()
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
	s1.getValue();
	s2.getValue();
	s3.getValue();
	s1.printValue();
	s2.printValue();
	s3.printValue();
	getch();
}