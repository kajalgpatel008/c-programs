#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],s3[50];
	int x;
	clrscr();
	printf("\nEnter String s1 :");
	gets(s1);
	printf("\nEnter String s2 :");
    //  scanf("%s" ,s1);
	gets(s2);
	strcat(s1,s2);
	printf("\nAfter concatnation string s1 is %s" ,s1);
	strcpy(s3,s2);
	printf("\nAfter copy s3 is %s" ,s3);
	x=strcmp(s1,s3);
	if(x==0)
	{
		printf("\ns1 &s3 are equal");
	}
	else
	{
		printf("\ns1 &s3 are Different");
	}
	strrev(s1);
	printf("\nAfter reverse string s1 is %s" ,s1);
	getch();
}

