#include<stdio.h>
#include<conio.h>
struct student
{
	int rno,s1,s2;
	char sname[30];
};
void main()
{
	struct student s;
	clrscr();
	printf("\nEnter student roll no :");
	scanf("%d" ,&s.rno);
	fflush(stdin);
	printf("\nEnter student name :");
   //   scanf("%s",&s.sname);
	gets(s.sname);
	printf("\nMarks of subject1 :");
	scanf("%d",&s.s1);
	printf("\nMarks of subject2 :");
	scanf("%d",&s.s2);
	printf("\nRoll no : %d" ,s.rno);
	printf("\nStudent name : %s" ,s.sname);
	getch();
}



