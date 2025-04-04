#include<stdio.h>
#include<conio.h>
void main()
{
	char name[50];
	int i,vowels=0,consonants=0;
	clrscr();
	printf("\nEnter Name : ");
	gets(name);
	for(i=0;name[i]!=0;i++)
	{
		if((name[i]=='a' || name[i]=='e'||name[i]=='i'||
		name[i]=='o'||name[i]=='u')||(name[i]=='A' ||
		 name[i]=='E'||name[i]=='I'||
		name[i]=='O'||name[i]=='U'))
		{
			vowels=vowels+1;
		}
		else
		{
			consonants=consonants+1;
		}
	}
	printf("\nNo of Vowels in %s =%d ",name,vowels);
	printf("\nNo of Consonants in %s =%d ",name,consonants);
	getch();
}






