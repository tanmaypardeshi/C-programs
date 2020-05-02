/*Accept a few records of employees and display record/s of employee/s
with maximum salary*/

#include<stdio.h>
#include<conio.h>

typedef struct
{
	int id,salary;
	char name[15];
}EMP;	/*rename structure as EMP*/

void main()
{
	EMP recs[6];
	int i,max;
	clrscr();
	printf("Enter data of 6 employees:- \n");
	for(i=0;i<6;i++)
	{
		printf("Enter id name and salary for employee no. %d:- ",i+1);
		scanf("%d %s %d",&recs[i].id,recs[i].name,&recs[i].salary);
	}
	/*Now iterate through records and find max. salary*/

	max=recs[0].salary;
	for(i=1;i<6;i++)
	{
		if(max<recs[i].salary)
			max=recs[i].salary;
	}
	/*Now display all records of employees who draw salary equal to max*/
	for(i=0;i<6;i++)
	{
		if(recs[i].salary==max)
			printf(" %d %s %d\n",recs[i].id,recs[i].name,recs[i].salary);
	}

	getch();
}