/*eg 1 of union*/

#include<stdio.h>
#include<conio.h>

union sample
{
	char ch;
	int i;
	float f;
};

void main()
{
	union sample s;
	clrscr();
	s.ch='m';
	printf("%c\n",s.ch);
	s.i=12345;
	printf("%d\n",s.i);
	s.f=12345.55;
	printf("%.2f\n",s.f);
	printf("Size of union is %d",sizeof(s));
	getch();
}