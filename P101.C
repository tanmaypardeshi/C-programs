/*An eg.of resting of struct. For eg.a structure called as address is
required while working with other structures like employee, customer, relative
etc. then this structure can be defined in a header file and can be made part
of any C program. A header file is similar to C file but with no main()
function*/

#include<stdio.h>	/*absolute path i.e. the compiler looks
#include<conio.h>	  for these header file in a path specified in
			  options, directories,include directories*/

#include "adr.h"	/*relative path i.e. the compiler looks for
			this header file in a path specified in current
			path i.e. d:\c\tc\program folder*/

typedef struct
{
	int id;
	char name[10];
	ADDRESS adr;
	float bal;
}CUSTOMER;

void main()
{
	CUSTOMER c={120,"amit","102,Karve Road","Pune",411004,750.07};
	clrscr();

	printf("Details of customer are:- \n");
	printf("ID - %d",c.id);
	printf("\nNAME-%s",c.name);
	printf("\nADDRESS-%s",c.adr.adr);
	printf("\nCITY-%s",c.adr.city);
	printf("\nPIN-%lu",c.adr.pin);
	printf("\nBALANCE-%.2f",c.bal);
	getch();
}
