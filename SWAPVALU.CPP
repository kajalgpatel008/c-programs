#include<iostream.h>
#include<conio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"\nEnter Value of A : ";
	cin>>a;
	cout<<"\nEnter Value of B : ";
	cin>>b;
	cout<<"\nBefore Swap value of A & B is : "<<a<<"&"<<b ;
	swap(&a,&b);
	cout<<"\nAfter Swap value of A & B is : "<<a<<"&"<<b ;
	getch();
}
