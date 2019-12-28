/*To accept a string from user and determine whether it is a palindrome
or not*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char word[30];
	int i=0,flag=1,j;
	clrscr();
	printf("Enter a word to check if palindrome or not:- ");
	gets(word);
	j=strlen(word)-1;	/*j points to las char and noy '\0'*/

	/*compare each character from left with character from right*/

	while(i<j)
	{
		if(word[i] != word[j])
		{
			flag=0;
			break;
		}
		i++;
		j--;
	}
	if(flag)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
	getch();
}