/* accept a 4x3 matrix from of int values from user
and display maximum no. using ptr
IMPORTANT NOTE-The computer is linear which means even the elements
of 2D matrix will occupy adjacent memory location like 1D array*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[4][3],i,j,max,*ptr;
	clrscr();
	printf("Enter elements of matrix:- \n");

	for(i=0;i<4;i++)
	{
		printf("Enter 3 elements for row no. %d:- ",i+1);

		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	ptr=&a[0][0];	/*to get base address of array*/
	max=*ptr;
	/*now compare with other elements*/

	for(i=1;i<12;i++)
	{
		if(max<*(ptr+i))
			max=*(ptr+i);
	}
	printf("Maximum number is %d",max);
	getch();
}