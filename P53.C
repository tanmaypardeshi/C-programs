/*An example of a menu driven program*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int no,choice,i,flag;
	long unsigned int fv;

	while(1)
	{
		clrscr();	/*menu will be displayed at top always*/
		printf("Menu driven program");
		printf("\n 1. To determine whether given no. is ODD or EVEN");
		printf("\n 2. To determine whether given no. is PRIME or not");
		printf("\n 3. To determine FACTORIAL value of a given number");
		printf("\n 4. Exit the program");
		printf("\n\nEnter your choice:- ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Enter the number:- ");
				scanf("%d", &no);

				if(no%2==0)
					printf("The number is EVEN");
				else
					printf("The number is ODD");
				break;
			case 2:
				printf("Enter the number:- ");
				scanf("%d", &no);
				flag=0;
				for(i=2;i<=no/2;i++)
					if(no%i==0)
					{
						flag=1;
						break;	/*terminate test*/
					}
				if(!flag)
					printf("Given no. is prime");
				else
					printf("Given no. is not prime");
				break;
			case 3:
				printf("Enter a number:- ");
				scanf("%d",&no);
				fv=1; 	/*initialise here only*/
				for(i=2;i<=no;i++)
					fv=fv*i;
				printf("Factorial value = %lu",fv);
				break;
			case 4:
				exit();	/*standard library function*/
			default:
				printf("Wrong choice, try again");
		}    /*end of switch*/

		getch();

	}           /* end of while*/

}		    /*end of main*/



