/*print sum of 1st n terms of 1/1!+2/2!+3/3!+.....*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,no_terms;
	long unsigned int fv=1;
	float sum=0;
	clrscr();
	printf("Enter the number of terms:- ");
	scanf("%d",&no_terms);

	for(no=1;no<=no_terms;no++)
	{
		fv=fv*no;
		sum+= (float) no/fv;
	}
	printf("The sum of 1st %d terms is %.3f",no_terms,sum);
	getch();
}