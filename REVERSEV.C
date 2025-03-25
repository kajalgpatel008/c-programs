#include<stdio.h>
#include<conio.h>
int reverseDigits(int num)
{
	clrscr();
	int rev_num=0;
	while(num>0)
	{
		rev_num=rev_num*10+num%10;
		num=num/10;
	}
	return rev_num;
}
void main()
{
	int num=4562;
	printf("Reverse of is %d",reverseDigits(num));
	getch();
}

