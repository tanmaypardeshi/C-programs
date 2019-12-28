/*write a recursive fn to calculate factorial value of any given whole no.*/

#include<stdio.h>
#include<conio.h>

long unsigned int calcfv(int);		/*fn decln*/

void main()
{
	int no;
	long unsigned int fv;
	clrscr();
	printf("Enter the no:- ");
	scanf("%d", &no);
	fv=calcfv(no);
	printf("FV=%lu",fv);
	getch();
}
long unsigned int calcfv(int x)
{
	long unsigned int y;
	if(x==1)
		return 1;
	y=x*calcfv(x-1);
	return y;
}