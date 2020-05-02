/*concept of pointers*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=5,*j;
	j=&i;
	clrscr();
	printf("Value in i is %d",i);
	printf("\nValue in i is %d",*j);
	printf("\nValue in i is %d",*(&i));
	printf("\nAdress of i is %u",&i);
	printf("\nAdress of i is %u",j);
	printf("\nAdress of j is %u",&j);
	getch();
}