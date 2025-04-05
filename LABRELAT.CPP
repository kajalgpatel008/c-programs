#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b;
	a=3;
	b=5;
	bool result;

	result=(a==b); //false
	cout<<"\n3==5 is "<<result;

	result=(a!=b); //true
	cout<<"\n3!=5 is "<<result;

	result=a>b; //false
	cout<<"\n3>5 is "<<result;

	result=a<b; //true
	cout<<"\n3<5 is "<<result;

	result=a>=b; //false
	cout<<"\n3>=5 is "<<result;

	result=a<=b; //true
	cout<<"\n3<=5 is "<<result;
	getch();
}
