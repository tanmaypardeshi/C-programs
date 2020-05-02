/*Accept a few nos. from user and write function to incr each no. by 5*/

#include<stdio.h>
#include<conio.h>
#define SIZE 50	/* A way to declare constants in C lang*/

void incr(int[],int);	/*fn decln*/

void main()
{
	int nos[SIZE],noe,i;
	clrscr();
	printf("Enter the no. of elements:- ");
	scanf("%d", &noe);
	printf("Enter elements of array:- ");

	for(i=0;i<noe;i++)
		scanf("%d", &nos[i]);
	incr(nos,noe);
	printf("\After incr(), nos[] is\n");
	for(i=0;i<noe;i++)
		printf("%d\t",nos[i]);
	getch();
}

void incr(int x[],int noe)
{
	int i;
	for(i=0;i<noe;i++)
		x[i]+=5;
}