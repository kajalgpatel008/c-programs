#include<iostream.h>
#include<conio.h>

void main()
{
	int marks;
	clrscr();
	cout<<"\nEnter Marks : ";
	cin>>marks;
	if(marks<0 || marks>100)
	{
	      cout<<"\nWrong entry";
	}
	else if(marks>90)
	{
		cout<<"\nGrade A";
	}
	else if(marks>75 && marks<=90)
	{
		cout<<"\nGrade B";
	}
	else if(marks>50 && marks<=75)
	{
		cout<<"\nGrade C";
	}
	else
	{
		cout<<"\nGrade D";
	}
	getch();
}

