/*an eg. of gotoxy(c,r); to print contents at exact locations*/

#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	gotoxy(30,12);
	printf("Databyte Computers");
	gotoxy(30,13);
	printf("Karve Road,Pune-04");
	gotoxy(34,3);
	printf("WELCOME");
	getch();
}