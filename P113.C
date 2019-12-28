/*DB managment system to manage records of employees*/

#include<stdio.h>
#include<conio.h>

struct emp
{

	int id;
	char name[10];
	float sal;
};

void main()
{
	struct emp e;
	char ask;
	FILE *fptr,*fptr_t;
	int choice,flag,recsize,cntr,eno;
	recsize=sizeof(e);

	while(1)
	{
		clrscr();
		printf("Database Managment system\n\n");
		printf("1.To add records\n");
		printf("2.To display records\n");
		printf("3.To modify a record\n");
		printf("4.To delete a record\n");
		printf("5.Exit\n\n");
		printf("Enter your choice:- ");
		scanf("%d",&choice);

		if(choice<1 || choice>5)
		{
			printf("Error in choice, try again");
			getch();
			continue;
		}
		if(choice==5)
			exit();

		switch(choice)
		{
			case 1:

			fptr=fopen("recs.dat","ab");
			ask='y';
			while(ask=='y'||ask=='Y')
			{
				printf("Enter the id name and salary of emp:- ");
				scanf("%d %s %f",&e.id,e.name,&e.sal);
				fwrite(&e,recsize,1,fptr);
				flushall();
				printf("Add more records ?:- ");
				scanf("%c",&ask);
			}
			fclose(fptr);
			printf("Records saved successfully");
			break;

			case 2:

			fptr=fopen("recs.dat","rb");
			cntr=1;
			printf("-------------------------------------\n");
			printf("SrNo\tEmpId\tName\t\tSalary\n");
			printf("-------------------------------------\n");
			while(1)
			{
				if(!fread(&e,recsize,1,fptr))
					break;
				printf("%d\t%5d\t%-10s\t%.2f\n",cntr,e.id,e.name,e.sal);
				cntr++;
			}
			fclose(fptr);
			break;

			case 3:

			fptr=fopen("recs.dat","rb+");
			/*rb+ mode allows us to search a record as well as
			modify it*/
			printf("Enter the empid to search :- ");
			scanf("%d",&eno);
			flag=0;
			while(fread(&e,recsize,1,fptr))	/*true*/
			{
				if(e.id==eno)
				{
					flag=1;
					break;	/*search successful*/
				}
			}
			if(!flag)
				printf("Record with empid %d not found",eno);

			else	/*Record found*/
			{
				/*now after search is successful
				the ptr is at the end of record so if we
				modify the record, the next record will
				get modified. So get the cursor to the start
				of record*/


				fseek(fptr,-recsize,SEEK_CUR);
				/*move to the left by 16 bytes from
				current position */

				printf("Enter changes:- ");
				scanf("%d %s %f",&e.id,e.name,&e.sal);
				fwrite(&e,recsize,1,fptr);
				printf("Record modified successfully");
			}
			fclose(fptr);
			break;

			case 4:

			/*here copy all records from recs.dat into
			a new file temp.dat except the record to delete*/

			fptr=fopen("recs.dat","rt");
			printf("Enter the emp id to search:- ");
			scanf("%d",&eno);
			flag=0;
			while(fread(&e,recsize,1,fptr))	/*true*/
			{
				if(e.id==eno)
				{
					flag=1;
					break;	/*search successful*/
				}
			}
			if(!flag)
				printf("Record with empid %d not found",eno);

			else	/*record found*/
			{
				fptr_t=fopen("temp.dat","wb");
				rewind(fptr);	/*IMPORTANT, get pointer
						to the start of the file*/
				/*Alt. - fseek(fptr,0,SEEK_SET)*/
				while(fread(&e,recsize,1,fptr))
				{
					if(eno!=e.id)
						fwrite(&e,recsize,1,fptr_t);
				}
				fcloseall();
				remove("recs.dat");
				rename("temp.dat","recs.dat");
				printf("Record with empid %d deleted successfully",eno);
			}
			break;

			case 5:
				exit();
		}
		getch();
	}
}


