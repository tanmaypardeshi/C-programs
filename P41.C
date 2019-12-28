/*print fibonacci series from mth term to nth term*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int ct=0,nt=1,m,n,cntr;
	clrscr();
	printf("Enter the mth term:- ");
	scanf("%d",&m);
	printf("Enther the nth term:- ");
	scanf("%d",&n);

	for(cntr=1;cntr<=n;cntr++)
	{
		if(cntr>=m)
			printf("%d ",ct);

		nt=ct+nt;
		ct=nt-ct;
	}
	getch();
}
