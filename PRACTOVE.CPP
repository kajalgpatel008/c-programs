#include<iostream.h>
#include<conio.h>
class Tops
{
	public:
		void test()
		{
			cout<<"\nTest with no argument";
		}
		void test(int a)
		{
			cout<<"\nTest with 1 int argument";
		}
		void test(int a,int b)
		{
			cout<<"\nTest with 2 int argument";
		}
};
void main()
{
	Tops t;
	clrscr();
	t.test();
	t.test(10);
	t.test(10,20);
	t.test();
	getch();
}