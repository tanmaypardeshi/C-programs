/*incr decr operator*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i=10,j;
	clrscr();
	j=++i + i++;
	printf("%d %d",i,j);
	getch();
}