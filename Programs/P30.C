/*pattern 4*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();

	for(r=1f;r<=5;r++)
	{
		for(c=1;c<=5-r;c++)
			printf("%c",32);
		for(c=1;c<=r;c++)
			printf("*");

		printf("\n");
	}
	getch();
}
