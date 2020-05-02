/* accept the marital status, age, gender of a driver and determine whether
he/she can be insured or not. Conditions for insuring are:-
1)Driver should be married
2)If unmarried female, age>=25
3)If unmarried male, age>=30*/


#include<stdio.h>
#include<conio.h>

void main()
{
	char ms,gender;
	int age;
	clrscr();
	printf("Enter the marital status, age and gender of driver:-");
	scanf("%c %d %c",&ms,&age,&gender);
		if(ms=='M'||ms=='m')
			printf("The driver should be insured");
		else
		{
			if(gender=='F'||gender=='f')
			{
				if(age>=25)
				printf("The driver should be insured");
				else
				printf("The driver should not be insured");
			}
			if(gender=='M'||gender=='m')
			{
				if(age>=30)
				printf("The driver should be insured");
				else
				printf("The driver should not be insured");
			}
		}
		getch();
}

