/*An eg. of 2D array of chars and 1D array of strings*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[5][10]={
			   "manish",
			   "ajay",
			   "meena",
			   "vinay",
			   "beena"
			  },username[10];
	int i,flag=0;
	clrscr();
	printf("Enter username:-");
	gets(username);

	for(i=0;i<5;i++)
	{
		if(strcmp(name[i],username)==0)
		{
			flag=1;
			break;
		}
	}
	if(!flag)
		printf("Invalid username, access denied");
	else
	{
		printf("Welcome member %s",username);
		printf("\nMenu driven program is...");
	}
	getch();
}