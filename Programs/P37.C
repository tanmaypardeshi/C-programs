/*pattern 11*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	clrscr();

	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(r==1)
				printf("%d",r);
			else
				printf("%d ",r+(r-1)*3);
		}
		printf("\n");
	}
	getch();
}
