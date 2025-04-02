#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char name[50];
	clrscr();
	cout<<"\nEnter Name : ";
  //    cin>>name;
	gets(name);
	cout<<"\nEnter Age : ";
	cin>>age;
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
	getch();
}
