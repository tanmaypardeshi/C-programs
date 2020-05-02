/*an eg of macro expansion and file inclusion*/

#include<stdio.h>
#include<conio.h>
#include "p104.h"

void main()
{
	clrscr();
	printf("Enter length and breadth of rectangle:- ");
	scanf("%d %d", &l, &b);
	ar=AREA(l,b);
	pr=PERIMETER(l,b);
	printf("Area =%d and perimeter =%d",ar,pr);
	getch();
}
