/*program to calculate SI on an investment
  by accepting values from user*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int prin,no_years;
	float rate,si;
	clrscr();
	printf("Enter principal value, rate and no of years:-");
	scanf("%d%f%d",&prin,&rate,&no_years);
	si=prin*rate*no_years/100;
	printf("The SI is Rs.%.2f",si);
	getch();
}