#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50];
	int l1;
	clrscr();
	printf("\nEnter String s1 :");
	gets(s1);
	printf("\nEnter String s2 :");
    //  scanf("%s" ,s1);
	gets(s2);
	strcat(s1,s2);
	printf("\nAfter concatnation string S1 is : %s" ,s1);
	l1=strlen(s1);
	printf("\nLength of string S1 is : %d",l1);
	getch();
}