#include<stdio.h>
#include<conio.h>
void printtable(int range,int num)
{
	int mul;
	int i;
	for(i=1;i<=range;i++)
	{
		mul=num*i;
		printf("%d*%d= %d",num,i,mul);
		printf("\n");
	}
}
void main()
{
	clrscr();
	int range=10;
	int num=5;
	printtable(range,num);
	getch();
}

