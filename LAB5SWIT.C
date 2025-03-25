#include<stdio.h>
#include<conio.h>

void main()
{
       int x;
       clrscr();
       printf("Enter x : ");
       scanf("%d" ,&x);
       switch(x)
       {
		case 1 :
			printf("It's a January ");
			break;
		case 2 :
			printf("It's a February");
			break;
		case 3 :
			printf("It's a march");
			break;
		case 4 :
			printf("It's a April");
			break;
		case 5 :
			printf("It's a May");
			break;
		case 6 :
			printf("It's a June");
			break;
		case 7 :
			printf("It's a July");
			break;
		case 8 :
			printf("It's a August ");
			break;
		case 9:
			printf("It's a September ");
			break;
		case 10 :
			printf("It's a October ");
			break;
		case 11:
			printf("It's a November");
			break;
		case 12 :
			printf("It's a December");
			break;
		default:
			printf("Invalied choice");
			break;
	}
	getch();
}



























