#include<stdio.h>
#include<conio.h>
void main()
{
	 FILE *fp;
	 int a,b,c,x,y,z;
	 clrscr();
	 fp=fopen("Max.txt","w");
	 printf("\nEnter A :");
	 scanf("%d",&a);
	 printf("\nEnter B :");
	 scanf("%d",&b);
	 printf("Enter C :");
	 scanf("%d",&c);
	 fprintf(fp,"%d %d %d",a,b,c);
	 fclose(fp);

	 fp=fopen("Max.txt","r");
	 fscanf(fp,"%d %d %d",&x,&y,&z);
	 if(x>y)
	 {
		if(x>z)
		{
			printf("\nX is Max Number");
		}
		else
		{
			printf("\nZ is Max number");
		}
	}
	else if(y>z)
	{
		printf("\nY is Max Number");
	}
	else
	{
		printf("\nZ is Max Number");
	}
	fclose(fp);
	getch();
}
