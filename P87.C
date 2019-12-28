/*to accept string from user and display its contents*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char fullname[30];
	clrscr();
	printf("Enter your full name:- ");
	gets(fullname);
	printf("Your fullname is %s",fullname);
	getch();
}

/*we can also use:-
puts("Your fullname is");
puts(fullname);

output for the foll. :-

Your fullname is
tanmay pardeshi
*/