/*accept a no. from user and determine whether it is a
perfect number or not.
Perfect number is number in which sum of divisors of no. is the no. itself*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,sum=1,i;
	clrscr();
	printf("Enter a number:- ");
	scanf("%d",&no);

	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
			sum+=i;
	}
	if(sum==no)
		printf("It is a perfect number");
	else
		printf("It is not a perfect number");
	getch();
}