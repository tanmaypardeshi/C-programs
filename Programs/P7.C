/*accept any 4 digit no from user and show its sum*/
#include<stdio.h>
#include<conio.h>

void main()
{

	int num,d1,d2,d3,d4,sum;
	error:
	clrscr();
	printf("Enter a 4 digit number:-");
	scanf("%d",&num);
	if(num<1000 || num>9999)
	{
		printf("Please enter a 4 digit number only");
		getch();
		goto error;
	}
	d1=num/1000;
	d2=num/100%10;
	d3=num/10%10;
	d4=num%10;
	sum=d4+d3+d2+d1;
	printf("The sum of the digits is %d",sum);
	getch();
}