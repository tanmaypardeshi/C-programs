/*Write a fn which displays the no. of times it is being
called by main()*/

#include<stdio.h>
#include<conio.h>

void fn();		/*fn decln*/

void main()
{
	clrscr();
	fn();
	fn();
	fn();
	/*cntr++;*/	/*global vars are accesible
			to all fns, if declared locally
			in fn(), we get error*/
	fn();
	getch();
}
void fn()
{
	static int cntr=1; 	/*scope is local, life is global*/
	printf("No. of times the fn is called is %d\n",cntr);
	cntr++;
}