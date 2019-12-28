/*print all prime nos. from 1-500*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i,flag;
	clrscr();
	for(no=1;no<=500;no++)
	{
		flag=0;
		for(i=2;i<=no/2;i++)
		{
			if(no%i==0)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
			printf("%d\t",no);
	}
	getch();
}