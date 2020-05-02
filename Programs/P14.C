/*accept basic salary of a person and determine the gross salary
if basic salary<5000 dearness allowance is 40% and house rent
allowance is 20% of basic salary. if basic salary>=5000 dearness
allowance is 10% and house rent allowance is 30%*/

#include<stdio.h>
#include<conio.h>

void main()
{

	float basic,gross,da,ha;
	error:
	clrscr();
	printf("Enter basic salary of an employee:-");
	scanf("%f",&basic);
		if(basic<=0)
		{
			printf("please enter a valid salary");
			getch();
			goto error;
		}
		if(basic<5000)
		{	da=40;
			ha=20;
		}
		if(basic>=5000)
		{	da=10;
			ha=30;
		}
	gross=(basic+(da+ha)*basic/100);
	printf("The gross salary of employee is %.2f",gross);
	getch();
}


