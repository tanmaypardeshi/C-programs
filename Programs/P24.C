/* accept a number and display its factorial value*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i;
	long unsigned int fv=1;
	clrscr();
	printf("Enter a number:-");
	scanf("%d",&no);

	for(i=2;i<=no;i++)
		fv=fv*i;
	printf("\nFactorial value of given no. %d is %lu",no,fv);
	getch();
}