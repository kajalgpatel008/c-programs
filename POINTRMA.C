#include<stdio.h>
#include<conio.h>
struct student
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
};
void main()
{
	struct student s;
	clrscr();
	printf("\nEnter student Roll no : ");
	scanf("%d" , &s.rno);
	fflush(stdin);
	printf("\nEnter student name : ");
	gets(s.sname);
	printf("\nEnter marks of subject 1 : ");
	scanf("%d" ,&s.s1);
	printf("\nEnter marks of subject 2 : ");
	scanf("%d" ,&s.s2);
	printf("\nEnter marks of subject 3 : ");
	scanf("%d" ,&s.s3);
	s.total=s.s1+s.s2+s.s3;
	s.per=s.total/3;
	printf("\nStudent roll No : %d ",s.rno);
	printf("\nStudent name : %s" ,s.sname);
	printf("\nTotal : %d" ,s.total);
	printf("\nPersentage : %lf",s.per);
	if(s.per>=70)
	{
		printf("\nDistinction");
	}
	else if(s.per>=60)
	{
		printf("\nFirst class");
	}
	else if(s.per>=50)
	{
		printf("\nSecond class");
	}
	else if (s.per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nFail");
	}
	getch();
}









