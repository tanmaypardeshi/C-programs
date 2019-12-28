/*Accept a number from the user and determine whether it is an
Armstrong no. or not
Armstrong no. eg 153=> 1^3 + 5^3 + 3^3=1+125+27=153 */

#include<stdio.h>
#include<conio.h>

void main()
{
	int num,sum=0,temp;
	clrscr();
	printf("Enter a number:- ");
	scanf("%d",&num);

	temp=num;

	while(temp!=0)
	{
		sum= sum+((temp%10)*(temp%10)*(temp%10));
		temp/=10;
	}
	if(sum==num)
		printf("It is an Armstrong number");

	else
		printf("It is not an Armstrong number");
	getch();
}
