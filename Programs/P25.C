/*accept a base and index of no. & display its power value*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int base,in,i;
	long unsigned int pv=1;
	clrscr();
	printf("Enter the base and index :-");
	scanf("%d %d",&base,&in);
	for(i=1;i<=in;i++)
		pv=pv*base;
	printf("Power value of %d having index %d is %lu",base, in,pv);
	getch();
}