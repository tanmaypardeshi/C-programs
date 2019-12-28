/*Accept a few records of employees and arrange them in desc order by salary.
If salary is same then arrange in alphabetical order by name.*/

#include<stdio.h>
#include<conio.h>

typedef struct
{
	int id,salary;
	char name[15];
}EMP;	/*rename structure as EMP*/

void main()
{
	EMP recs[8],temp;	/*compare salary but switch complete record*/
	int i,j;
	clrscr();
	printf("Enter data of 8 employees:-\n ");
	for(i=0;i<8;i++)
	{
		printf("Enter id name salary of emp. no. %d:- ",i+1);
		scanf("%d %s %d",&recs[i].id,recs[i].name,&recs[i].salary);
	}
	for(i=1;i<8;i++)
	{
		for(j=0;j<8-1;j++)
		{
			if(recs[j].salary<recs[j+1].salary)
			{
			     temp=recs[j];
			     recs[j]=recs[j+1];
			     recs[j+1]=temp;
			}

			else if(recs[j].salary==recs[j+1].salary)
			{
				if(strcmp(recs[j].name,recs[j+1].name)>0)
				{
					temp=recs[j];
					recs[j]=recs[j+1];
					recs[j+1]=temp;
				}
			}
		}
	}
	printf("Sorted data is as follows:-\n ");
	for(i=0;i<8;i++)
	{
		printf("%d %s %d\n",recs[i].id,recs[i].name,recs[i].salary);
	}
	getch();
}

