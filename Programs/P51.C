/*accept any whole nos. betn 5-7 and display it using switch-case*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	clrscr();
	printf("Enter a whole number between 5-7:- ");
	scanf("%d", &no);

	switch(no)
	{
		case 5:
			printf("The number entered is 5");
			break;
		case 6:
			printf("The number enteres is 6");
			break;
		case 7:
			printf("The number entered is 7");
			break;
		default:
			printf("Please enter a no. betn 5-7 only");
	}
	getch();
}