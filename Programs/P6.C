/*swapping two number without using temp variable*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no1,no2;
	clrscr();
	printf("Enter two numbers:-");
	scanf("%d%d",&no1,&no2);
	no1=no1+no2;
	no2=no1-no2;
	no1=no1-no2;
	printf("After swapping no1=%d and no2=%d",no1,no2);
	getch();
}