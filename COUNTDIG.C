#include<stdio.h>
#include<conio.h>
int findCount(int n)
{
	//for digit 0
	if(n==0)
	    return 1;

	int count= 0;
	while(n!=0)
	{
	//increment count
		count++;
		n/= 10;
	}
	return count;
}
void main()
{
	int n= 98562;
	clrscr();
	findCount(n);
	printf("\nCount of digits in %d = %d", n , findCount(n));
	getch();
}









