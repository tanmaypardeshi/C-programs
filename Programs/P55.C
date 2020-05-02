/*An example of called fn which becomes a calling fn for some other fn*/

#include<stdio.h>
#include<conio.h>

void street();		/*fn decln*/
void college();

void main()
{
	clrscr();
	printf("I'm in my home");
	street();
	printf("\nI'm back home");
	college();
	getch();
}
void street()
{
	printf("\nI'm on my way to college");
	college();
	printf("\nI'm on my way to home");
}
void college()
{
	printf("\nI'm in my college attending lectures");
}
