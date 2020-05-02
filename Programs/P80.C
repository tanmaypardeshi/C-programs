/*Program to multiply 2 matrices. Requirement: No. of
cols of 1st matrix should be equal to number of rows of 2nd matrix.
The resultant matrix will have no. of rows of 1st matrix and
no. of cols of 2nd matrix*/

#include<stdio.h>
#include<conio.h>
#define R 50
#define C 50

void main()
{
	int a[R][C], b[R][C], p[R][C],nor1,nor2,noc1,noc2,sum,i,j,k;

	error:
	clrscr();
	printf("Enter no. of rows and columns of M1:- ");
	scanf("%d %d", &nor1, &noc1);
	printf("Enter no. of rows and columns of M2:- ");
	scanf("%d %d", &nor2,&noc2);

	if(noc1!=nor2)
	{
		printf("Error, cannot multiply, check order");
		getch();
		goto error;
	}
	printf("Enter matrix 1:- \n");
	for(i=0;i<nor1;i++)
	{
		printf("Enter %d elements for row no. %d:-",noc1,i+1);
		for(j=0;j<noc1;j++)
			scanf("%d", &a[i][j]);
	}
	printf("Enter matrix 2:- \n");
	for(i=0;i<nor2;i++)
	{
		printf("Enter %d elements for row. no %d:- ",noc2,i+1);
		for(j=0;j<noc2;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<nor1;i++)
	{
		for(j=0;j<noc2;j++)
		{
			sum=0;
			for(k=0;k<noc1;k++)
				sum+=a[i][k]+b[k][j];
			p[i][j]=sum;
		}
	}
	printf("Product of matrices is \n");
	for(i=0;i<nor1;i++)
	{
		for(j=0;j<noc2;j++)
			printf("%d\t", p[i][j]);
		printf("\n");
	}
	getch();
}