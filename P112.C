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
	fptr=fopen("recs.dat","rb");
	if(fptr==NULL)
	{
		printf("File recs.dat not found");
		getch();
		exit();
	}
	while(1)
	{
		if(!fread(&e,sizeof(e),1,fptr))	/*1-true*/
			break;
		printf("%d %s %.2f\n",e.id,e.name,e.sal);

	}
	fclose(fptr);
	getch();
}
