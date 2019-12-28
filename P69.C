/*Write a fn which accepts radius of circle from main()
and calculates diameter, area and circumference. print
result achieved from main*/

#include<stdio.h>
#include<conio.h>

void calc(int,int*,float*, float*);	/*fn decln*/

void main()
{
	int r,d;
	float ar,cc;
	clrscr();
	printf("Enter the radius of the circle:- ");
	scanf("%d",&r);
	calc(r,&d,&ar,&cc);
	printf("Radius of circle=%d\n",r);
	printf("Diameter of circle=%d,area=%.2f,circumference=%.2f",d,ar,cc);
	getch();
}
void calc(int r, int *ptr_d, float *ptr_ar, float *ptr_cc)
{
	*ptr_d=2*r;
	*ptr_ar=3.14*r*r;
	*ptr_cc=2*3.14*r;
}
