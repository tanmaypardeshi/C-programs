/*pattern 9*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,num;
	clrscr();

	for(r=1;r<=5;r++)
	{
		num=1;
		for(c=1;c<=r;c++)
		{
			printf("%d",num);
			num+=2;
		}
		printf("\n");
	}
	getch();
}