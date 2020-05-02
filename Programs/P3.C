/*program to calculate SI on an investment*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int prin=1000,no_years=3;
	float rate=6.5,si;
	clrscr();
	si=prin*rate*no_years/100;
	printf("The simple interest is Rs.%.2f",si);
	getch();
}
