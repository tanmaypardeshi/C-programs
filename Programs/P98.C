/*An eg. of self initialised struct var with a fn to change its contents.
Process is known as "Call by Reference". Result achieved*/

#include<stdio.h>
#include<conio.h>

struct book
{
	int id;
	char title[15],author[10];
	float price;
};

/*fn decln*/

void modify(struct book *);

void main()
{
	struct book b={123,"c language","kanetkar",500.25};
	clrscr();
	printf("Before modify(),b contains:-\n");
	printf("%d %s %s %.2f",b.id,b.title,b.author,b.price);
	modify(&b);
	printf("\nAfter modify(), b contains:-\n");
	printf("%d %s %s %.2f",b.id,b.title,b.author,b.price);
	getch();

}

void modify(struct book *ptr_b)
{
	ptr_b->id=189;
	ptr_b->price=455.00;
	strcpy(ptr_b->title,"C++");	/*not ptr_b->title="c++"*/
}