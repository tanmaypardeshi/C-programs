/*strcmp() to compare 2 strings- this fn returns difference of
ASCII values of 1 by 1 character from both strings till last character*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[20],str2[20];
	int diff;
	clrscr();
	printf("Enter string 1:- ");
	gets(str1);
	printf("Enter string 2:- ");
	gets(str2);
	diff=strcmp(str1,str2);		/*stricmp if we dont want
					case sensitive*/
	printf("Difference is %d\n",diff);

	if(diff==0)
		printf("2 strings are same");
	else
		printf("2 strings are not same");
	getch();
}
