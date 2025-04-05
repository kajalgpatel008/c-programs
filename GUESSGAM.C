#include<stdio.h>
#include<conio.h>
void main()
{
	int userGuess,mynum;
	clrscr();
	mynum=rand()%10;      //it is between 0&9
	printf("\nNumber between (1-10).can you guess it? ");
	while(1)
	{
		printf("\nEnter your Guess (between 1 & 10): ");
		scanf("%d", &userGuess);
	       if(mynum==userGuess)
		{
			printf("\nCongratulations! You guessed the correct number!");
			break;
		}
		else if(mynum>userGuess)
		{
			printf("\nNumber is too low.Try again!");
		}
		else
		{
			printf("\nNumber is too high.Try again!");
		}
	}
	getch();
}
