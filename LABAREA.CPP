#include<iostream.h>
#include<conio.h>
void main()
{
	int length,width;
	int area;
	clrscr();
	cout<<"\nArea of Rectangle\n";
	cout<<"\nEnter the Length of Rectangle : ";
	cin>>length;
	cout<<"\nEnter the Width of Rectangle : ";
	cin>>width;
	area=length*width;
	cout<<"\nArea of Rectangle is : "<<area;
	getch();
}