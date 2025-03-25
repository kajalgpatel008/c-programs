#include<stdio.h>
#include<conio.h>
int rno,s1,s2,s3,total;
double per;
char sname;
void main()
{
	printf("\nEnter student roll no :");
	scanf("%d" ,sro);
	fflush(stdin);
	printf("\nEnter student name :");
	gets(sname);
	printf("\nEnter marks of subject1 :");
	scanf("%d" ,s1);
	printf("\nEnter marks of subject2 :");
	scanf("%d" ,s2);
	printf("\nEnter marks of subject3 :");
	scanf("%d" ,s3);
	total=s1+s2+s3;
	per=total/3;
	printf("\nstudent roll no. : %d" ,rno);
	printf("\nstudent name : %s" ,s);
	printf("\ntotal : %d" ,total);
	printf("\npersentage : %lf" ,per);
	if(Per>=70)
	{
		printf("\nDistiction");
	}
	else if(per>=60)
	{
		printf("\nFirst class");
	}
	else if(per>=50)
	{
		printf("\nSecond class");
	}
	else if(per>=40)
	{
		printf("\nPass class");
	}
	else
	{
		printf("\nFail");
	}
	getch();
}




























