/* accept a 4x3 matrix from of int values from user
and display maximum no.*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[4][3],i,j,max;
	clrscr();
	printf("Enter elements of matrix:- \n");

	for(i=0;i<4;i++)
	{
		printf("Enter 3 elements for row no. %d:- ",i+1);

		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	max=a[0][0];

	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
				max=a[i][j];
		}
	}
	printf("Maximum number is %d",max);
	getch();
}