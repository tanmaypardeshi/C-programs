/*accept a 4 digit number from user and determine whether
  its reverse is the same or not*/
#include<stdio.h>
#include<conio.h>

void main()
{

	int num,d1,d2,d3,d4,revnum;
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
	revnum=1000*d4+100*d3+10*d2+d1;
	printf("\nThe reverse of given number is %d",revnum);
	if(num==revnum)
		printf("\nBoth the numbers are same");
	else
		printf("\nBoth the numbers are not same");
	getch();
}