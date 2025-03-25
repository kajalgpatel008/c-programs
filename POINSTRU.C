#include<stdio.h>
#include<conio.h>

struct Student
{
	int rno;
	char sname[50];
};
void main()
{
	struct Student *s1;
	clrscr();
	printf("\nEnter student Roll No :");
	scanf("%d",&s1->rno);
	fflush(stdin);
	printf("\nEnter student Name :");
	gets(s1->sname);
	getch();
}