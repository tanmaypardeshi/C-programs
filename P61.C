/*accept a whole no. in main() and write a recursive fn to calculate the
sum of its digits*/

#include<stdio.h>
#include<conio.h>

int calcsum(long unsigned int);		/*fn decln*/

void main()
{
	long unsigned int no;
	int sum;
	clrscr();
	printf("Enter a whole no:- ");
	scanf("%lu",&no);
	sum=calcsum(no);
	printf("Sum of digits of given no. is %d",sum);
	getch();
}
int calcsum(long unsigned int x)
{
	int y;
	if(x==0)
		return 0;	/*sum of digits of no. is 0*/
	y=x%10+calcsum(x/10);
	return y;
}