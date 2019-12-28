/*Write a fn which accepts 3 integers from main fn and returns their sum*/

#include<stdio.h>
#include<conio.h>

		/*fn decln*/

void main()
{
	int a,b,c,sum;
	clrscr();
	printf("Enter any 3 whole nos.:- ");
	scanf("%d %d %d", &a, &b, &c);
	sum=calcsum(a,b,c);	/*actual arguments*/
	printf("Sum of given 3 numbers is %d", sum);
	getch();
}
int calcsum(int x,int y,int z)	/*formal arguments x=a,y=b,z=c*/
{
	int s;
	s=x+y+z;
	return s;	/*terminate the fn and sum of
			main()=s of calcsum()*/
}

