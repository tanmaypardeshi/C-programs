/*An eg. of union nested in a structure*/

#include<stdio.h>
#include<conio.h>

struct book
{
	char bookname[15],author[20];
	union price
	{
		int rs;
		float dollars;
	}p;	/*union has to be given a name*/
};

void main()
{
	struct book b1={"C language","Y Kanetkar"},b2={"C++","William K"};
	b1.p.rs=455;
	b2.p.dollars=12.35;
	clrscr();
	printf("Indian edition\n");
	printf("Book title- %s\n",b1.bookname);
	printf("Book author- %s\n",b1.author);
	printf("Price- %d\n\n",b1.p.rs);
	printf("International edition\n");
	printf("Book title- %s\n",b2.bookname);
	printf("Book author- %s\n",b2.author);
	printf("Price- %.2f\n\n",b2.p.dollars);
	getch();
}