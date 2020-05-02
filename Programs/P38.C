/*pattern 13*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();

	for(r=1;r<=5;r++)  /*upper traingle*/
	{
		for(c=1;c<=5-r;c++)
			printf("%c",32);
		for(c=1;c<=r;c++)
			printf("*%c",32);
			printf("\n");
	}
	for(r=4;r>=1;r--)   /*lower traingle*/
	{
		for(c=1;c<=5-r;c++)
			printf("%c",32);
		for(c=1;c<=r;c++)
			printf("*%c",32);
			printf("\n");
	}
	getch();
}

