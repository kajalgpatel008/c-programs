#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	for(i=0;i<10;i++)
	{
		if(i==3)
		{
			continue;
		}
		else
		{
			printf("\nl :%d" ,i);
		}
	}
	getch();
}