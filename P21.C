/*an eg in which the loop need to be executed depending upon user's
choice*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	char ask='y';
	clrscr();
	while(ask=='y'|| ask=='Y')    /*use relational and not assignment*/
	{
		printf("Enter no:-");
		scanf("%d", &no);
		printf("Square of given number is %d\n",no*no);
		flushall();  /*fflush(stdin); in LINUX*/
		printf("Continue(y/n)=:-");
		scanf("%c", &ask);
	}
	/*no getch(); reqd*/
}
