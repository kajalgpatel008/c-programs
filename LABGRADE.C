#include<stdio.h>
#include<conio.h>

void main()
{
	int marks;
	clrscr();
	printf("\nEnter Marks :");
	scanf("%d",&marks);
	if(marks<0 || marks>100)
	{
	      printf("\nWrong entry");
	}
	else if(marks>90)
	{
		printf("\nGrade A");
	}
	else if(marks>75 && marks<=90)
	{
		printf("\nGrade B");
	}
	else if(marks>50 && marks<=75)
	{
		printf("\nGrade C");
	}
	else
	{
		printf("\nGrade D");
	}
	getch();
}


