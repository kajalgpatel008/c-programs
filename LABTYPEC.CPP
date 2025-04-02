#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double num_double=3.56;
	cout<<"\nnum_double = "<<num_double;

	// C style conversion from double to int
	int num_int1=(int)num_double;
	cout<<"\nnum_int1 = "<<num_int1;

      // function style conversion from double to int
	int num_int2= int(num_double);
	cout<<"\nnum_int2 = "<<num_int2;
	getch();
}
