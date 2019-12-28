/*eg-1 on macro expansion*/

#include<stdio.h>
#include<conio.h>
#define PI 3.14	/*macro-definition,PI-tempelate, 3.14-expansion*/


void main()
{
	int r;
	float ac,cc;
	clrscr();
	printf("Enter radius of circle:- ");
	scanf("%d",&r);
	ac=PI*r*r;
	cc=2*PI*r;
	printf("Area =%.2f and Circumference =%.2f",ac,cc);
	getch();
}