/*accept a number from user and determine
whether it is prime number or not*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,no,flag=0;
	clrscr();
	printf("Enter a number:-");
	scanf("%d", &no);

	for(i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
	}
	if(!flag)
		printf("no. entered is a prime no.");
	else
		printf("no .entered is not a prime number");
	getch();
}
