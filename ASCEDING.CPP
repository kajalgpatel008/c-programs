#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp ;
	clrscr();
	cout<<"\nEnter array Element\n";
	for(i=0;i<5;i++)
	{
		cout<<"Enter"<<i<<" element : ";
		cin>>a[i];
	}
	cout<<"\nArray elements are\n";
	for(i=0;i<5;i++)
	{
		cout<<"\na["<<i<<"] = "<<a[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nArray in Asceding order\n";
	for(i=0;i<5;i++)
	{
		cout<<"\na["<<i<<"] = "<<a[i];
	}
	getch();
}




