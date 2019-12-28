/*write a program to accept the details of a say 3 students and display them*/

#include<stdio.h>
#include<conio.h>

/*Very important- always declare structure globally
so that they are accesible to all fns*/

struct student
{
	int rollno,per;
	char name[10];
};

void main()
{
	int i;
	struct student recs[3];
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Enter roll no., name, percent of student no %d:- ",i+1);
		scanf("%d %s %d",&recs[i].rollno,recs[i].name,&recs[i].per);
	}
	clrscr();
	printf("The data of 3 students is:-");
	for(i=0;i<3;i++)
	{
		printf("\n%d %s %d",recs[i].rollno,recs[i].name,recs[i].per);
	}
	getch();
}