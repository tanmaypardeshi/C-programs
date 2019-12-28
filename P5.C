/*swapping two number*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no1,no2,temp;
	clrscr();
	printf("Enter two numbers:-");
	scanf("%d%d",&no1,&no2);
	temp=no1;
	no1=no2;
	no2=temp;
	printf("After swapping no1=%d and no2=%d",no1,no2);
	getch();
}