/*accept 3 numbers and determine the greatest by scalable solution*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("Enter 3 whole numbers:-");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(max<b)
		max=b;
	if(max<c)
		max=c;
	printf("%d is the greatest number",max);
	getch();

}