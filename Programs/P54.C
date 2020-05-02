/*An example of function to display personal info*/

#include<stdio.h>
#include<conio.h>

void myinfo();		/*fn decln. Declaration is not necessary if
			fn is defined before main() */

void main()
{
	clrscr();
	printf("\n My name is Sandeep Shevade");
	myinfo();	/*fn call*/
	printf("\n Thanks");
	myinfo();	/*fn called again*/
	getch();
}

void myinfo()		/*fn definition*/
{
	printf("\n I have done my engg. from COEP");
	printf("\n I have my own comp. training centre");
}
