#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,*p;
	clrscr();
	printf("\nEnter Array element\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d element :" ,i);
		scanf("%d" ,&a[i]);
	}
	p=&a[0];
	printf("\nArray element with their address\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d]=%d-Address : %u",i,a[i],p++);
	}
	getch();
}

