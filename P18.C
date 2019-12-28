
/*max of 3 numbers using operators*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,max;
	clrscr();
	printf("Enter 3 numbers to compare:-");
	scanf("%d %d %d",&a, &b, &c);
	max= a>b?a>c?a:c:b>c?b:c;
	printf("Greatest number:-%d",max);
	getch();
}