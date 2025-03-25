#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	clrscr();
	printf("\nEnter array Element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element : ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\nArray elements are\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]= %d",i,a[i]);
	}
	printf("\nSum : %d",sum);
	getch();
}

