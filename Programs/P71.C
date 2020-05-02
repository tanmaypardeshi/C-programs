/*Write a fn which accepts 4 digit whole number from main()
and calculates sum and prdt of all digits, sum of 1st and3rd
and2nd and 4th*/

#include<stdio.h>
#include<conio.h>

void calc(int,int*,int*,int*,int*);

void main()
{
	int no,s1,s2,s,prdt;
	clrscr();
	printf("Enter a 4 digit whole no :- ");

	scanf("%d",&no);
	calc(no,&s1,&s2,&s,&prdt);
	printf("s1=%d,s2=%d,s=%d,prdt=%d",s1,s2,s,prdt);
	getch();
}
void calc(int no,int *ptr_s1,int *ptr_s2, int *ptr_s,int *ptr_prdt)
{
	int d1,d2,d3,d4;
	d4=no%10;
	d3=(no/10)%10;
	d2=(no/100)%10;
	d1=no/1000;

	*ptr_s1=d1+d3;
	*ptr_s2=d2+d4;
	*ptr_s=d1+d2+d3+d4;
	*ptr_prdt=d1*d2*d3*d4;
}