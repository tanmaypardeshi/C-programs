/*example of precedence of operators and typecasting*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int numer=22,denom=7;               /*decln and initialn of variable*/
	 float pi=(float)numer/denom;        /*typecast int to float for calcn*/
	 clrscr();
	 printf("6*3/18=%d",6*3/18);
	 printf("\n3/18*6=%d",3/18*6);
	 printf("\n22/7=%.3f",pi);            /*show upto 3 decimal places*/
	 printf("\nnumer=%.3f",(float)numer); /*represent int as float*/
	 getch();
}