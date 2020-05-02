/*pattern 8*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,nosp=1;
	char ch;
	clrscr();

	for(r=7;r>=1;r--)
	{
		ch='A';  	/*left side*/
		for(c=1;c<=r;c++)
		{
			printf("%c",ch);
			ch++;
		}
		if(r!=7)        /*space pattern*/
		{
			for(c=1;c<=nosp;c++)
				printf("%c",32);
				nosp+=2;
		}
		ch--;		/*right side*/
		for(c=1;c<=r;c++)
		{
			if(ch!='G')
				printf("%c",ch);
				ch--;
		}
		printf("\n");
	}
	getch();
}
