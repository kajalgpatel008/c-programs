#include<stdio.h>
#include<conio.h>
struct student
{
	int rno;
	char sname[30];
};
void main()
{
	struct student s1;
	clrscr();
	printf("\nEnter student roll no :");
	scanf("%d" ,&s1.rno);
	fflush(stdin);
	printf("\nEnter student name :");
   //   scanf("%s",&s1.sname);
	gets(s1.sname);
	printf("\nRoll no : %d" ,s1.rno);
	printf("\nStudent name : %s" ,s1.sname);
	getch();
}
