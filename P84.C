/*Write a fn which returns the second largest element from an array
of int values. Do not use sorting and nested loop*/

#include<stdio.h>
#include<conio.h>
#define SIZE 50


		/*fn decln*/

void main()
{
	int i,nos[SIZE],noe,no;
	clrscr();
	printf("Enter the number of elements of array:- ");
	scanf("%d", &noe);
	printf("Enter elements:- ");

	for(i=0;i<noe;i++)
		scanf("%d", &nos[i]);

	no = snd_largest(noe,nos);
	if(no==-32768)
		printf("No 2nd largest element in array");
	else
		printf("2nd largest element is %d",no);
	getch();
}

int snd_largest(int noe,int nos[])
{
	int max1,max2,i;

	max1=nos[0];
	max2=-32768;

	for(i=0;i<noe;i++)
	{
		if(max1<nos[i])
		{
			max2=max1;
			max1=nos[i];
		}
		else if(max1>nos[i] && max2<nos[i])
			max2=nos[i];
	}
	return max2;
}