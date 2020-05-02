/*Accept one 3x3 matrix from user and display it along
with transpose below it*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3], i,j;
	clrscr();
	printf("Enter elements of the matrix:-\n");
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	clrscr();
	printf("The given matrix is:- \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");

	}
	printf("\n\nTranspose of given matrix is:- \n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[j][i]);
		printf("\n");
	}
	getch();
}