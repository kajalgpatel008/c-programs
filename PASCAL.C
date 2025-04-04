#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n=5;
	clrscr();
	for(i=0;i<n;i++)
	{
		int val=1;
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf(" %d",val);
			val=val*(i-k)/(k+1);    //calculate next value in row
		}
		printf("\n");
	}
	getch();
}