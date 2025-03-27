#include<iostream.h>
#include<conio.h>

void main()
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
	clrscr();
	cout<<"\nEnter student Roll no : ";
	cin>>rno;
	cout<<"\nEnter student name : ";
	cout<<"\nEnter marks of subject 1 : ";
	cin>>s1;
	cout<<"\nEnter marks of subject 2 : ";
	cin>>s2;
	cout<<"\nEnter marks of subject 3 : ";
	cin>>s3;
	total=s1+s2+s3;
	per=total/3;
	cout<<"\nStudent roll No : "<<rno;
	cout<<"\nStudent name : "<<sname;
	cout<<"\nTotal : "<<total;
	cout<<"\nPersentage :"<<per;
	if(per>=70)
	{
		cout<<"\nDistinction";
	}
	else if(per>=60)
	{
		cout<<"\nFirst class";
	}
	else if(per>=50)
	{
		cout<<"\nSecond class";
	}
	else if (per>=40)
	{
		cout<<"\nPass class";
	}
	else
	{
		cout<<"\nFail";
	}
	getch();
}

