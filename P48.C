/*write a program to print all combinations of 1 2 3*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	for(x=1;x<=3;x++)
	{
		for(y=1;y<=3;y++)
		{
			for(z=1;z<=3;z++)
			{
				if(x!=y && y!=z && z!=x)
					printf("%d %d %d\n",x,y,z);
			}
		}
	}
	getch();
}