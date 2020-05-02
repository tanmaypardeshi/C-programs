/*Accept a sentence from user and a word from user and determine
the no. of occurences of word in the given sentence*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char sent[300],word[50],*ptr,temp[50];
	int i,j,cntr=0;

	clrscr();
	printf("Enter a sentence :- ");
	gets(sent);
	printf("Enter the word to be searched:- ");
	gets(word);

	for(i=0;sent[i]!='\0';i++)
	{
		ptr=&sent[i];
		for(j=0;j<strlen(word);j++)
		{
			temp[j]=*ptr;
			ptr++;
		}
		temp[j] = '\0';
		if(strcmp(word,temp)==0)
			cntr++;
	}
	if(cntr==0)
		printf("The word is missing in the sentence");
	else
		printf("The word %s occurs %d times in the sentence",word,cntr);
	getch();
}