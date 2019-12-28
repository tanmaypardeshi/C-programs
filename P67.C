/*Write a fn to increment 2 nos. received from main()
by 2 different values say 3 and 5. Process is known as
"Call By Value". Result not achieved*/

#include<stdio.h>
#include<conio.h>

void incr(int,int);	/*fn decln*/

void main()
{
	int a=10,b=20;
	clrscr();
	printf("Before incr(), a=%d and b=%d",a,b);
	incr(a,b);
	printf("\nAfter incr(), a=%d and b=%d",a,b);
	getch();
}
void incr(int a, int b)
{
	a+=3;
	b+=5;
}