#include<iostream.h>
#include<conio.h>

class Calculator
{
	int a,b;
	public:
		void Data()
		{
			cout<<"\nEnter A : ";
			cin>>a;
			cout<<"\nEnter B : ";
			cin>>b;

		}
		void Addition()
		{
			cout<<"\nAddition : "<<a+b;
		}
		void Addition()
		{
			cout<<"\nAddition : "<<a+b;
		}
		void Addition()
		{
			cout<<"\nAddition : "<<a+b;
		}
		void Addition()
		{
			cout<<"\nAddition : "<<a+b;
		}





};
void main()
{
	Calculator c;
	int choice;
	clrscr();
	c.data();
	while(1)
	{
		cout<<"\n1. Deposit";
		cout<<"\n2. Withdraw";
		cout<<"\n3. Check Balance";
		cout<<"\n4. Exit";

		cout<<"\n\n. Enter Your Choice :";
		cin>>choice;
		if(choice==1)
		{
			b1.deposit();
		}
		else if(choice==2)
		{
			b1.withdraw();
		}
		else if(choice==3)
		{
			b1.checkBalance();
		}
		else if(choice==4)
		{
			break;
		}
		else
		{
			cout<<"\nInvalied Choice";
		}
	}
	getch();
}


