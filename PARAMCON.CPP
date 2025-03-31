#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:

		Box(double w,double h,double d)
		{
			cout<<"\nparameterized Constructer Called";
			width=w;
			height=h;
			depth=d;
		}
		void volume()
		{
			cout<<"\nVolume of Box is "<<width*height*depth;
		}
};
void main()
{
	clrscr();
	Box b1(4,5,6);
	b1.volume();
	getch();
}




