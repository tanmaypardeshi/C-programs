/*Accept a few lines of text from user and store it in a file and stop when
line is BLANK*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char line[80];
	FILE *fptr;
	fptr=fopen("sample.txt","wt");
		/*t-text mode, w-write mode.
		In this mode, if file doesnt exist it gets created
		and if it exists it gets overwritten.
		To avoid overwriting, use "at", append mode*/
	clrscr();
	printf("Enter a few lines of text:-\n");
	while(1)
	{
		gets(line);
		/*write data to the file"*/
		fputs(line,fptr);
		fputs("\n",fptr);	/*we can use fputc('\n',fptr);
					seperate lines of text using blank
					line*/
		/*stop the process when line is empty*/
		if(strlen(line)==0)
			break;
	}
	fclose(fptr);
	printf("File saved successfully");
	getch();
}