#include<stdio.h>
#include<conio.h>
struct student
{
	int rno,marks;
	char sname[50];
};
void main()
{
	struct student s1;
	clrscr();
	int i;
	printf("\nEnter information of students\n");
	for(i=0;i<3;i++)
	{
		printf("Enter roll no :");
		scanf("%d",&s1.rno);
		printf("Enter student name :");
		scanf("%s",s1.sname);
		printf("Enter marks :");
		scanf("%d",&s1.marks);
	}
	printf("\nDisplaying information\n");
	for(i=0;i<3;i++)
	{
		printf("\nRoll number : %d",s1.rno);
		printf("\nstudent name : %s",s1.sname);
		printf("\nmarks : %d",s1.marks);
	}
	getch();
}
