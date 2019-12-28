/*to print 20 lines each having 60 dashes. Note-screen capacity r=25, c=80
pattern 1*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();

	for(r=1;r<=20;r++)
	{
		for(c=1;c<=60;c++)
			printf("-");
			printf("Row number is %d\n",r);
	}
	getch();
}