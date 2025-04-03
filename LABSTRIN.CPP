#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
	char s1[50],s2[50];
	clrscr();
	int x;
	cout<<"\nEnter String S1 : ";
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	x=strcmp(s1,s2);
	if(x==0)
	{
		cout<<"\nS1 is Palindrom ";
	}
	else
	{
		cout<<"\nS1 is not Palindrom ";
	}
	getch();
}



