#include<iostream.h>
#include<conio.h>

void Multiplication_Table(int N,int range)
{
	int i;
	int multi;
	for(i=1;i<=range;i++)
	{
		multi=N*i;
		cout<<"\n"<<N<<"*"<<i<<"="<<multi;
	}
}
void main()
{
	int N=5;
	int range=10;
	clrscr();
	Multiplication_Table(N,range);
	getch();
}
