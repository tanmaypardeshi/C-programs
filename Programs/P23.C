/*accept any no. from user and display its table upto 12*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i;
	clrscr();
	printf("Enter a number:-");
	scanf("%d",&no);

	for(i=1;i<=12;i++)
	{
		printf(" %d x %d= %d\n",no,i,no*i);
	}
	getch();
}