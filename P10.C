/*accept CP and SP from user and determine whether it was a no profit
no loss deal along with profit % profit or loss incurred*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float cp,sp,prft_loss;
	clrscr();
	printf("Enter CP and SP of item:-");
	scanf("%f%f",&cp,&sp);
	if(cp==sp)
		printf("No profit no loss deal");
	else
	{
		prft_loss=(sp-cp)/cp*100;
		if(sp>cp)
			printf("Profit percent is %.2f",prft_loss);
		else
			printf("Loss percent is %.2f",-prft_loss);
	}
	getch();
}