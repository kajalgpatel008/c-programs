#include<iostream.h>
#include<conio.h>
void main()
{
	 int a[5],i;
	 clrscr();
	 cout<<"\nEnter Array element:\n ";
	 for(i=0;i<=5;i++)
	 {
		cout<<"Enter"<<i<<" element :";
		cin>>a[i];
	 }
	 cout<<"\nArray elements are :";
	 for(i=0;i<=5;i++)
	 {
		cout<<"\na["<<i<<"]= "<<a[i];
	 }
	 getch();
}