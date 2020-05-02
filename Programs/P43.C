/*print first n prime nos*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no,i,flag,n,cntr;
	clrscr();
	printf("Enter the number of prime nos. to be printed:- ");
	scanf("%d",&n);
	/*go on generating the terms from 1 and stop only when number
	number of terms are printed. The loop generates a no. which may
	or may not be a prime no. So count only if prime*/

	for(cntr=1,no=1;cntr<=n;no++)
	{
		flag=0;
		for(i=2;i<=no/2;i++)
		{
			if(no%i==0)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			printf("%d\t",no);
			cntr++;		/*if prime no. found, then only
					count*/
		}
	}
	getch();
}