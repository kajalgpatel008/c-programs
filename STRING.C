#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50];
	int L1,L2;
	clrscr();
	printf("\nEnter String s1:");
    //	scanf("%s" ,s1);
	gets(s1);
	printf("\nEnter String s2 :");
	gets(s2);
	strcpy(s2,s1);
	strlen(s2);
	x=strlen(s1,s2);                          \\
	if(x==0)
	{
		printf("\nS1& S2 is equal");
	}
	else
	{
		printf("\nS1& S2 is diffrent");
	}
	getch();
}







