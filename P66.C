/*%i can accept either decimal,octal or hexadecimal format, not so
with %d which is decimal format*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no_d,no_o,no_h;
	clrscr();
	printf("Enter the number in decimal format:- ");
	scanf("%i",&no_d);	/*11*/
	printf("Enter the number in octal format:- ");
	scanf("%i",&no_o);	/*011*/
	printf("Enter number in hexadecimal format:- ");
	scanf("%i",&no_h);	/*0x11*/
	printf("no_d=%i",no_d);
	printf("\nno_o=%i",no_o);
	printf("\nno_h=%i",no_h);
	getch();

}

