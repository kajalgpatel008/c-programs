#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp;
	clrscr();
	printf("\nEnter Array element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element :" ,i);
		scanf("%d" ,&a[i]);
	}
	printf("\nArray element are\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray in Asceding order");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d" ,i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nArray in desceding order");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d" ,i,a[i]);
	}
	getch();

}

































