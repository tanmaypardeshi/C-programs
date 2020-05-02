/*To accept few records user and store it into a file*/

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
	FILE *fptr;
	fptr=fopen("recs.txt","at");
	clrscr();

	while(1)
	{
		printf("Enter id,name and salary of employee:- ");
		scanf("%d %s %f",&e.id,e.name,&e.sal);
		fprintf(fptr,"%d %s %.2f\n",e.id,e.name,e.sal);

		/*only 1 parameter is extra here if compared to printf()
		which is the file name/pointer to write*/

		flushall();
		printf("Continue:- ");
		scanf("%c",&ask);
		if(ask!='y' && ask!='Y')
			break;
	}
	fclose(fptr);
	printf("Records stored successfully");
	getch();
}