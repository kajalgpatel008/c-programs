#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50];
	int x;
	clrscr();
	printf("\nEnter String s1 :");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	x=strcmp(s1,s2);
	if(x==0)
	{
		printf("\ns1 is palindrom");
	}
	else
	{
		printf("\s1 is not palindrom");
	}
	getch();
}




