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
	Box b2(b1);
	b2.volume();
	getch();
}







