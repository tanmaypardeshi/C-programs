/*print first "n" term of fibonacci series*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int ct=0,nt=1,no_terms,cntr;
	clrscr();
	printf("Enter the number of terms to be printed:- ");
	scanf("%d",&no_terms);

	for(cntr=1;cntr<=no_terms;cntr++)
	{
		printf("%d ",ct);
		nt=ct+nt;
		ct=nt-ct;
	}
	getch();
}
