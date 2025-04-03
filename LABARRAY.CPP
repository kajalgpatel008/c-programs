#include<iostream.h>
#include<conio.h>
void main()
{
	 int a[5],i,sum=0;
	 int average;
	 int n=5;
	 clrscr();
	 cout<<"\nEnter Array element:\n ";
	 for(i=0;i<5;i++)
	 {
		cout<<"Enter"<<i<<" element :";
		cin>>a[i];
		sum=sum+a[i];
		average=sum/n;

	 }
	 cout<<"\nArray elements are :";
	 for(i=0;i<5;i++)
	 {
		cout<<"\na["<<i<<"]= "<<a[i];
	 }
	 cout<<"\nSum : "<<sum;
	 cout<<"\nAverage : "<<average;
	 getch();
}