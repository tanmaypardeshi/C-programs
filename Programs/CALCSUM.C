/*Accept any whole number from user as command line argument and display
the sum of its digits*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
	int no, sum=0;

	if(argc!=2)
	{
		printf("Syntax error");
		exit(0);	/*0 because it is taking exit from stdlib.h*/
	}
	no=atoi(argv[1]);	/*converts argument to integer
				function in stdlib.h*/
	while(no!=0)
	{
		sum+=no%10;
		no/=10;
	}
	printf("Sum of digits is %d",sum);
}