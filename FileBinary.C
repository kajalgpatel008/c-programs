#include<stdio.h>
#include<conio.h>

struct Num
{
	int n1,n2,n3;
};

void main()
{
	int n;
	struct Num num;
	FILE *f;
	f=fopen("data","wb");
	for(n=1;n<=5;n++)
	{
		num.n1=n;
		num.n2=5*n;
		num.n3=5*n+1;
		fwrite(&num,sizeof(struct Num),1,f);
	}
	fclose(f);
	printf("\nFile Written Successfully");
	f=fopen("data","rb");
	for(n=1;n<+5;n++)
	{
		fread(&num,sizeof(struct Num),1,f);
		printf("\nN1 : %d\nN2 : %d\nN3 : %d",num.n1,num.n2,num.n3);
	}
	fclose(f);
	getch();
}





