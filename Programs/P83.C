/*Write a fn which accepts 2 int arrays such that 1 array B contains
all elements of array A except for 1 missing element. The function should
return that element to main()*/

#include<stdio.h>
#include<conio.h>
#define SIZE 50

int fn(int[],int[],int);	/*fn decln*/

void main()
{
	int a[SIZE], b[SIZE],noe,i;
	clrscr();
	printf("Enter no. of elements to be stored in a[]:- ");
	scanf("%d", &noe);
	printf("Enter the elements in a[]:- ");

	for(i=0;i<noe;i++)
		scanf("%d", &a[i]);

	printf("Enter elements of b[]:- ");

	for(i=0;i<noe-1;i++)
		scanf("%d",&b[i]);

	printf("Missing number is %d", fn(a,b,noe));
	getch();
}

int fn(int a[], int b[], int noe)
{
	int sum_a=0, sum_b=0,i;

	for(i=0;i<noe;i++)
		sum_a+=a[i];
	for(i=0;i<noe-1;i++)
		sum_b+=b[i];

	return sum_a-sum_b;
}
