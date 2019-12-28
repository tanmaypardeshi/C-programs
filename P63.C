/*to display the address of a variable*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=5;
	clrscr();
	printf("Value of var i is %d",i);
	printf("\nAddress of var i is %u",&i);
	getch();
}