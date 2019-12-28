/*alternate soln*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int no;
	char ask;
	clrscr();
	while(1)
	{
		printf("Enter a number:-");
		scanf("%d",&no);
		printf("The square of the no is %d\n", no*no);
		printf("Continue(y/n):-");
		flushall();
		scanf("%c",&ask);
		if(ask=='y' || ask =='Y')
			continue;
		else
			break;
	}
}
