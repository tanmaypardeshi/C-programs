/*print nos from 1-100 using single printf and no loops*/

#include<stdio.h>
#include<conio.h>

void main()
{
	static int no=1; /*static prevents copies of var being created*/
	printf("%d\t",no);
	no+=1;
	if(no<=100)
		main();
			      /*dont use clrscr() as it clears screen after
				every number being printed*/
}