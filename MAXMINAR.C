#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],i,n,max,min;
	clrscr();
	printf("\nEnter number of Element : ");
	scanf("%d",&n);
	printf("\nEnter Array Element\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d Elements : ",i);
		scanf("%d",&a[i]);
	}
	//assuming elements at a[0] are the max & min

	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
	//checking for maximum number
	     if (max<a[i])
		 max=a[i];
	  // checking for minimum number
	   if (min>a[i])
	       min=a[i];
	}
	printf("\nLargest Element : %d ",max);
	printf("\nSmallest Element : %d ",min);
	getch();
}
