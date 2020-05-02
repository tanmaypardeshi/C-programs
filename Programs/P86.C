/*to accept string from user and display its contents*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char fullname[30];
	clrscr();
	printf("Enter your full name:- ");
	scanf("%s", fullname); /*name of array(string)
				itself is base addr of array*/
	printf("Your fullname is %s",fullname);
	getch();
}