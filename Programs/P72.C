/*To accept marks of say 5 students
in a subject and display average*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[5],ttl=0,i;
	float avg;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter marks of student no %d:- ",i+1);
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
		ttl+=marks[i];
	avg=(float)ttl/5;
	printf("Average is %.2f",avg);
	getch();
}