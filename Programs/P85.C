/*an eg. of string*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[]={"databyte computers"};
			/*string initialisation is easier than array*/

	int i;
	char *ptr;
	clrscr();

	/*method 1 - using '\0'*/
	for(i=0;i!='\0';i++)
		printf("%c",str[i]);

	printf("\n");

	/*method 2 - using library functions*/

	for(i=0;i<strlen(str);i++)
		printf("%c", str[i]);

	printf("\n");

	/*method 3 using pointers*/

	ptr=str;	/*when we equate an array to ptr
			 var, we get the base address of array
			 i.e. it is the same as ptr=&str[0];*/

	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	printf("\n");


	/*method 4 - use format string*/

		printf("%s",str);
	getch();
}