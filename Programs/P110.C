/*Read records stored in a file, record by record*/

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
	FILE *fptr;
	clrscr();
	fptr=fopen("recs.txt","rt");
	if(fptr==NULL)
	{
		printf("File recs.txt not found");
		getch();
		exit();
	}
	while(1)
	{
		if(fscanf(fptr,"%d %s %f",&e.id,e.name,&e.sal)==EOF)
			break;
		printf("%d %s %.2f\n",e.id,e.name,e.sal);

	}
	fclose(fptr);
	getch();
}
