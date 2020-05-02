/*eg-2 on macro expansion to make statements readable*/

#include<stdio.h>
#include<conio.h>
#define AND &&
#define OR ||
#define SHOW printf("HI");
#define DISPLAY printf("\nHELLO")
#define NAME "Shantanu"

void main()
{
	int a=10,b=20,c=30;
	clrscr();
	if((a<10 AND b<20) OR c==30)
	{
		SHOW
		DISPLAY;
		printf("\n");
		printf(NAME);
	}
	getch();
}