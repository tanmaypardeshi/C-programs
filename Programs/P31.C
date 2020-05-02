/*pattern 6*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	char ch;
	clrscr();

	for(r=1;r<=5;r++)
	{
		ch='A';
		for(c=1;c<=r;c++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	getch();
}
