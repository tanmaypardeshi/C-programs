/*An example of strcpy() to copy contents of source to target*/


#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char src[20], tgt[20];
	clrscr();
	printf("Enter source string:- ");
	gets(src);
	/*tgt=src*/	/*error as strings are arrays
			and cannot be copied using assignment
			operator i.e. "="*/
	strcpy(tgt,src);
	printf("Target string is %s",tgt);
	getch();
}