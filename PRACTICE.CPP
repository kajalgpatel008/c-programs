#include<iostream.h>
#include<conio.h>
class Bank
{
	int balance,amount,acno;
	char *cname;
	public:
		void openAccount()
		{
			cout<<"\nEnter Account number :";
			cin>>acno;
			cout<<"\nEnter Initial Balance :";
			cin>>balance;
			cout<<"\nEnter Custormer Name :";
			cin>>cname;
		}
		void deposit()
		{
			cout<<"\nEnter Deposit Amount :";
			cin>>amount;
			balance=balance+amount;
		}
		void withdraw()
		{
			cout<<"\nEnter Withdrawal Amount :";
			cin>>amount;
			if(amount<=balance)
			{
				balance=balance-amount;
			}
			else
			{
				cout<<"\nYou Need Another"<<amount-balance<<"";
			}
		}
		void checkBalance()
		{
			cout<<"\nCurrent balance :"<<balance;
		}
};
void main()
{
	Bank b1;
	int amount;
	int choice;
	clrscr();
	b1.openAccount();
	while(1)
	{
		cout<<"\n1. Deposit";
		cout<<"\n2. Withdraw";
		cout<<"\n3. Check Balance";
		cout<<"\n4. Exit";

		cout<<"\n\nEnter your choice :";
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



















