/*To print "Hello" five times using do while loop*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int cntr=0;
	clrscr();
	do
	{
		printf("Hello\n");
		cntr++;
	}while(cntr<5);
	getch();
}