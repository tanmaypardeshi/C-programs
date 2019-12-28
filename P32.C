/*pattern 7*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c;
	char temp,ch='A'; /*patterm starts with char 'A' and not each row,
			    use temp var for printing and ch to keep track of
			    where previous row has started*/
	clrscr();

	for(r=5;r>=1;r--)
	{
		for(c=1;c<=5-r;c++)
			printf("%c",32);
		temp=ch;
		for(c=1;c<=r;c++)
		{
			printf("%c",temp);
			temp++;
		}
		printf("\n");
		ch++;
	}
	getch();
}