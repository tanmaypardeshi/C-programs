/*print sum of 1st n natural numbers*/

#include<stdio.h>
#include<conio.h>

void main()
{
/*natural series is 1,2,3,4... there is no
need to have a counter*/

	int no,no_terms,sum=0;
	clrscr();
	printf("Enter the number of terms:- ");
	scanf("%d",&no_terms);

	for(no=1;no<=no_terms;no++)
		sum+=no;
	printf("The sum of 1st %d terms is %d",no_terms,sum);
	getch();
}