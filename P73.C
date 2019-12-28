/*an example of self initialised array*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int nos[]={18,49,0,3,12,455,139,111,348,10};
	int odd=0,i;
	clrscr();
	for(i=0;i<10;i++)
	{
		if(nos[i]%2==0)
			odd++;
	}
	printf("Total odd nos. are %d",odd);
	printf("\nTotal even nos. are %d",10-odd);
	getch();
}