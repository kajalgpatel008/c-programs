#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i;
	FILE *f;
	clrscr();
	f=fopen("Array","wb");
	printf("\nEnter Array Element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d Element :",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray Element are\n");
	for(i=0;i<5;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
		fwrite(&a[i],sizeof(a[5]),1,f);
	}
	fclose(f);
	f=fopen("Array","rw");
	for(i=0;i<5;i++)
	{
		fread(&a[i],sizeof(a[5]),1,f);
		printf("\na[%d]=%d",i,a[i]);
	}
	fclose(f);
	getch();
}

