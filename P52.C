/*Example of 2 switch cases*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter your choice(A/B):- ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'a':
		case 'A':
			printf("Your choice is A");
			break;

		case 'b':
		case 'B':
			printf("Your choice is B");
			break;
		default:
			printf("Error in choice");
	}
	getch();
}