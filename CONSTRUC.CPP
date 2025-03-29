#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:
		Box()
		{
			cout<<"\nDefault Constructer Called";
			width=3;
			height=4;
			depth=5;
		}
		Box(double w,double h,double d)
		{
			cout<<"\nparameterized Constructer Called";
			width=w;
			height=h;
			depth=d;
		}
		Box(Box &b)
		{
			cout<<"\nCopy Constructer Called";
			width=b.width;
			height=b.height;
			depth=b.depth;
		}

		void volume()
		{
			cout<<"\nVolume of Box is "<<width*height*depth;
		}
};
void main()
{
	clrscr();
	Box b1;
	b1.volume();

	Box b2(4,5,6);
	b2.volume();

	Box b3(b1);        //box b3(b2)
	b3.volume();
	getch();
}








