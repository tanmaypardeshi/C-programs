/*print first "n" term of positive odd series*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no,no_terms,cntr;
	clrscr();
	printf("Enter the number of terms to be printed:- ");
	scanf("%d",&no_terms);

	for(cntr=1,no=1;cntr<=no_terms;cntr++,no+=2)
		printf("%d\t",no);
	getch();
}