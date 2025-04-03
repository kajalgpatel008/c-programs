#include<iostream.h>
#include<conio.h>

int a=10;                //global variable
void fun(void)
{
	int b=40;          //local variable to function
	cout<<"\nIn fun() a= "<<a;
	cout<<"\nIn fun() b= "<<b;
}
void main()
{
	clrscr();
	int a=20;     //local variable to main
	int b=30;
	cout<<"\nIn main() a= "<<a;
	cout<<"\nIn main() after calling fun() b= "<<b;
	getch();
}
