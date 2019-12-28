/*Accept a filename from user and display its contents alongwith no. of
lines, tabs and spaces it contains*/

#include<stdio.h>
#include<conio.h>


void main()
{
	char filename[20],ch;
	int nol=0,nosp=0,not=0;
	FILE *fptr;
	clrscr();
	printf("Enter filename:- ");
	gets(filename);
	fptr=fopen(filename,"r");

	/*VALIDATION*/

	if(fptr==NULL)	/*NULL is a macro in stdio.h. written as
			#define NULL 0*/
	{
		printf("File %s is not found",filename);
	getch();
	exit();
	}
	/*now read the contents of the file*/
	while(1)
	{
		ch=fgetc(fptr);
		if(ch==EOF)	/*#define EOF -1	EOF-end of file*/
			break;
		printf("%c",ch);

		/*analyse the character*/
		if(ch== ' ');
			nosp++;
		if(ch=='\n')
			nol++;
		if(ch=='\t')
			not++;
	}
	fclose(fptr);	/*close the file as file operations are completed*/

	printf("\n\nNo. of lines are %d",nol);
	printf("\nNo. of spaces are %d",nosp);
	printf("\nNo .of tabs are %d", not);
	getch();
}
