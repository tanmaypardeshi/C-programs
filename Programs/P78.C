/*Accept a matrix of int values from user and display
row and column totals*/

#include<stdio.h>
#include<conio.h>
#define R 50
#define C 50


void main()
{
	int nos[R][C],nor,noc,sumr,sumc,i,j;
	clrscr();
	printf("Enter the number of rows and columns:- ");
	scanf("%d %d",&nor, &noc);

	/*accept elements*/

	for(i=0;i<nor;i++)
	{
		printf("Enter %d no. of elements for row no %d:- ",noc,i+1);
		for(j=0;j<noc;j++)
			scanf("%d", &nos[i][j]);
	}
	clrscr();
	for(i=0;i<nor;i++)
	{
		sumr=0;
		for(j=0;j<noc;j++)
		{
			printf("%d\t", nos[i][j]);
			sumr+=nos[i][j];
		}
		printf("%d \n",sumr);
	}
	for(j=0;j<noc;j++)
	{
		sumc=0;
		for(i=0;i<nor;i++)
		{
			sumc+=nos[i][j];
		}
		printf("%d \t",sumc);
	}
	getch();
}