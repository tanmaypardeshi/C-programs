/*an eg. on scope of vars*/

#include<stdio.h>
#include<conio.h>

int a=10, b=20;	/*global vars- accesible to all fns*/

void display();

void main()
{
	int b=15;	/*local var*/
	/* int b=10; =>redeclaration error*/
	a=25;	/*will affect global var a*/
	b=18;	/*local var b*/
	clrscr();
	printf("In main(), global var a=%d and local var b=%d",a,b);
	display();
	getch();
}
void display()
{
	printf("\nIn display(), global var a=%d and b=%d",a,b);
}