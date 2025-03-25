#include<stdio.h>
#include<conio.h>
void main()
{
	 FILE *fp;
	 int rno,r;
	 char sname[50],s[50];
	 double per,p;
	 clrscr();
	 fp=fopen("student.txt","w");
	 printf("\nEnter Roll No :");
	 scanf("%d",&rno);
	 fflush(stdin);
	 printf("\nEnter Student Name :");
	 gets(sname);
	 printf("Enter Persentage :");
	 scanf("%lf",&per);
	 fprintf(fp,"%d %s %lf",rno,sname,per);
	 fclose(fp);
	 fp=fopen("student.txt","r");
	 fscanf(fp,"%d %s %lf",&r,s,&p);
	 printf("\nRoll No : %d",r);
	 printf("\nStudent Name : %s",s);
	 printf("\nPersentage : %lf",p);
	 fclose(fp);
	 getch();
}