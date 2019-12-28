/*To accept prin rate no_years from user and display SI*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int prin, no, cntr=0;
	float rate, si;
	clrscr();
	while(cntr<3)
	{
		printf("Enter prin, rate, no of years:-");
		scanf("%d %f %d",&prin, &rate, &no);
		si=prin*rate*no/100;
		printf("SI=%.2f\n",si);
		cntr++;
	}
	getch();
}