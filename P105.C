/*An eg, of condiotional compilation and miscellaneous directives*/

#include<stdio.h>
#include<conio.h>
#define DISCOUNT /*opposite of #define DISCOUNT*/
		/*used instead of deleting macro definition*/
		/*this is called miscellaneous directives*/

void main()
{
	int rate,qty,disc_per,disc_amt,netpay;
	clrscr();
	printf("Enter rate and qty:- ");
	scanf("%d %d", &rate, &qty);

	#ifdef DISCOUNT 	/*if defn of DISCOUNT exists.This
				is called conditional compilation*/
	printf("Enter disc %:- ");
	scanf("%d",&disc_per);
	disc_amt=(rate*qty*disc_per)/100;
	netpay=(rate*qty)-disc_amt;
	printf("Less discount= %d",disc_amt);
	printf("\nNet amount payable =%d",netpay);

	#else
		netpay=rate*qty;
		printf("Net amount payable =%d",netpay);
	#endif
		getch();
}