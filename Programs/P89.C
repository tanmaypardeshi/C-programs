/*An example of strcat() to join 2 strings, concantenate means join*/


#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char src[20], tgt[40];
	clrscr();
	printf("Enter source string:- ");
	gets(src);
	printf("Enter target string:- ");
	gets(tgt);
	strcat(tgt,src);
	printf("Target string is now %s ", tgt);
	getch();
}