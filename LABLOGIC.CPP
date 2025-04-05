#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	bool result;
	result =(3!=5)&&(3<5);   //true
	cout<<"\n(3!=5)&&(3<5) is "<<result;

	result =(3==5)&&(3<5);   //false
	cout<<"\n(3==5)&&(3<5) is "<<result;

	result =(3==5)&&(3>5);   //false
	cout<<"\n(3==5)&&(3>5) is "<<result;

	result =(3!=5)||(3<5);   //true
	cout<<"\n(3!=5)||(3<5) is "<<result;

	result =(3!=5)||(3>5);   //true
	cout<<"\n(3!=5)||(3>5) is "<<result;

	result =(3==5)||(3>5);   //false
	cout<<"\n(3==5)||(3>5) is "<<result;
	result= !(5==2);  //true
	cout<<"!(5==2) is "<<result;

	result= !(5==5);  //false
	cout<<"!(5==5) is "<<result;
	getch();
}





