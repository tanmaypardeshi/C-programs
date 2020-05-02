/*Accept source and target filename from user and copy the contents of
source file into target file*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char src[20],tgt[20],ch;
	FILE *fs,*ft;
	clrscr();
	printf("Enter the source filename:- ");
	gets(src);

	fs=fopen(src,"rt");

	/*VALIDATION*/
	if(fs==NULL)
	{
		printf("source file %s not found",src);
		getch();
		exit();
	}
	printf("Enter the target filename:- ");
	gets(tgt);
	ft=fopen(tgt,"wt");
	while(1)
	{
		ch=fgetc(fs);
		if(ch==EOF)
			break;
		fputc(ch,ft);
	}
	fcloseall();	/*will close both source and target file*/
	printf("Contents of source copied into target file");
	getch();
}
