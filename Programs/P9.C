/*accept the rate and qty of an item form user and display
the  net amount payable.
a discount of 10% is offered if qty purchased is >=100 units*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int rate,qty,disc_per=0,net_pay;
	/*disc_per=0 is initialised to destroy garbage value stored in it*/
	clrscr();
	printf("\nEnter the rate and qty of item:-");
	scanf("%d%d",&rate,&qty);

	if(qty>=100)
		disc_per=10;
	net_pay=rate*qty-rate*qty*disc_per/100;
	printf("The net amount payable is Rs.%.2f",(float)net_pay);
	getch();
}