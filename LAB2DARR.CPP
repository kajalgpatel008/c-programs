#include<iostream.h>
#include<conio.h>
void main()
{
	int a[2][2],i,j;
	clrscr();
	cout<<"\nEnter 2D Array\n";
	for(i=0;i<2;i++)
	{
	       for(j=0;j<2;j++)
	       {
		     cout<<"Enter "<<i<<" Row and "<<j<<" column : ";
		     cin>>a[i][j];
	       }
	}
	cout<<"\n2D Array is\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		      cout<<"\na["<<i<<"]["<<j<<"]="<<a[i][j];
		}
	}
	getch();
}

