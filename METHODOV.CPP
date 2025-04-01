#include<iostream.h>
#include<conio.h>

class Tops
{
	public:
		void test()
		{
			cout<<"\ntest with no argument";
		}
		void test(int a)
		{
			cout<<"\ntest with 1 int argument";
		}
		void test(int a,int b)
		{
			cout<<"\ntest with 2 int argument";
		}
};
void main()
{
	Tops t1;
	clrscr();
	t1.test();
	t1.test(10,20);
	t1.test();
	t1.test(10);
	getch();
}




