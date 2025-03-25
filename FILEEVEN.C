#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int a,x;
	clrscr();
	fp=fopen("even.txt","w");
	printf("\nEnter A :");
	scanf("%d",&a);
	fprintf(fp,"%d",a);
	fclose(fp);
	fp=fopen("even.txt","r");
	fscanf(fp,"%d",&x);
	if(x%2==0)
	{
		printf("\nx is even number");
	}
	else
		printf("\nx is odd number");
	}
	printf("\na : %d", x);
	fclose(fp);
	getch();
}