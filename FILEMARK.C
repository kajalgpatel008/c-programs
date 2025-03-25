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
	FILE *f;
	clrscr();
	f=fopen("student.txt","w") ;
	printf("\nEnter student roll number :");
	scanf("%d",&s1.rno);
	fflush(stdin);
	printf("\nEnter student name :");
	gets(s1.sname);
	printf("\nEnter student marks :");
	scanf("%d",&s1.marks);
	fprintf(f,"\n%d %s %d",s1.rno,s1.sname,s1.marks);
	fclose(f);
	printf("Data written successfully");
	f=fopen("student.txt","r");
	fscanf(f,"%d %s %d",&s1.rno,&s1.sname,&s1.marks);

	getch();
}



















