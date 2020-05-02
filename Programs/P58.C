/*eg-2 on scope of var*/

#include<stdio.h>
#include<conio.h>

/*no need for fn decln as default return type
is int and we are using int fn */

void main()
{
	int c=10;	/*local var*/
	clrscr();
	printf("Before modify() c=%d",c);
	c=modify(c);
	printf("\nAfter modify() c=%d",c);
	getch();
}
int modify(int x)
{
	x+=5;
	return x;	/*c of main()=x of modify()*/
}