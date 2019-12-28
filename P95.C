/*Memory map of 2D array of characters. This array requires 50 bytes.
Actually if we go by individual strings, it should have not more than 30
bytes. So this tecnhque of initialising several strings at a time
is inefficient*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char *name[5]={
			"manish",
			"ajay",
			"meena",
			"vinay",
			"beena"};
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("%u-%s\n",name[i],name[i]);
	}
	getch();
}