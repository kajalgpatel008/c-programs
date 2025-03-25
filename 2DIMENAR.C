#include<stdio.h>
#include<conio.h>
void main ()
{
	int a[3][3],i,j;
	clrscr();
	printf("\nEnter 2 D Array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter %d row & %d colum :" ,i,j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n2 D Array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d ",a[i][j]);
		}
		printf("\n");
	}
	getch();
}











