/*A program which displays the contents of a file whose name is
accepted as command line argument*/

#include<stdio.h>
#include<conio.h>

void main(int argc, char *argv[])
{
	FILE *fptr;
	char ch;

	/*VALIDATION*/
	if(argc!=2)
	{
		printf("Syntax error");
		exit();
	}
	fptr=fopen(argv[1],"rt");
	if(fptr==NULL)
	{
		printf("File %s doesnt exist",argv[1]);
		exit();
	}
	while(1)
	{
		ch=fgetc(fptr);
		if(ch==EOF)\
			break;
		printf("%c",ch);
	}
	fclose(fptr);
}