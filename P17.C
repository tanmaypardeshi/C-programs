/*Accept any character from user and determine its category i.e. whether
it is a capital or small letter, digit or a symbol*/

#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	int no;
	clrscr();
	printf("Enter a character:-");
	scanf("%c",&ch);
	no=ch;	/*if we equate char to int we get its ASCII value*/
	if(no>=65 && no<=90)
		printf("Capital letter");
	else if(no>=97 && no<=122)
		printf("Small letter");
	else if(no>=48 && no<=57)
		printf("Number");
	else
		printf("Symbol");
	getch();
}
