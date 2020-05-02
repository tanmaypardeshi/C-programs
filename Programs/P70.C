/*Write a fn which accepts 2 int values from main() and calcs
sum, diff, prdt and quot. print result in main()*/

#include<stdio.h>
#include<conio.h>

void calc(int,int,int*,int*,int*,float*);

void main()
{
	int a,b,sum,diff,prdt;
	float quot;
	clrscr();
	printf("Enter 2 int values:- ");
	scanf("%d %d",&a, &b);
	calc(a,b,&sum,&diff,&prdt,&quot);
	printf("sum=%d,diff=%d,prdt=%d,quot=%.2f",sum,diff,prdt,quot);
	getch();
}
void calc(int a,int b, int *ptr_s, int *ptr_d, int *ptr_p,float *ptr_q)
{
	*ptr_s=a+b;
	*ptr_d=a-b;
	*ptr_p=a*b;
	*ptr_q=(float)a/b;
}

