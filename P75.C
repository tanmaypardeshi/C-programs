/*sorting elements of an array*/

#include<stdio.h>
#include<conio.h>
#define SIZE 50

void main()
{
	int noe,nos[SIZE],i,j,comp_cntr=0,temp,flag;
	clrscr();
	printf("Enter no. of elements:- ");
	scanf("%d",&noe);
	/*accept elements*/
	printf("Enter elements:- ");

	for(i=0;i<noe;i++)
		scanf("%d",&nos[i]);
	/*outer loop*/
	for(i=1;i<noe;i++)
	{
		flag=0;
		for(j=0;j<noe-i;j++)
		{
			comp_cntr++;
			if(nos[j]>nos[j+1])
			{
				flag=1;
				temp=nos[j];
				nos[j]=nos[j+1];
				nos[j+1]=temp;
			}
		}
		printf("\nAfter pass %d, array is ",i);
		for(j=0;j<noe;j++)
			printf("%d ",nos[j]);;

		if(!flag)
			break;
	}
	printf("\nNo. of comparisons are %d", comp_cntr);
	getch();
}