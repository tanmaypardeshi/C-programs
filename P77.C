/*To add 2 matrices of order 2x2 and display resultant matrix*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2]={10,20,30,40}, b[2][2]={50,60,70,80},
	t[2][2],i,j,r,c;
	clrscr();
	/*determine total*/
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			t[i][j]=a[i][j]+b[i][j];
	}
	clrscr();
	r=12;
	c=25;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			gotoxy(c,r);
			printf("%d",a[i][j]);
			c+=5;
		}
		r+=2;
		c-=10;
	}
	gotoxy(35,13);
	printf("+");
	r=12;
	c=40;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			gotoxy(c,r);
			printf("%d",b[i][j]);
			c+=5;
		}
		r+=2;
		c-=10;
	}
	gotoxy(50,12);
	printf("=");
	r=12;
	c=55;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			gotoxy(c,r);
			printf("%d",t[i][j]);
			c+=5;
		}
		r+=2;
		c-=10;
	}
	getch();
}
