/*accept marks of student on 3 subjects and display % along with
class obtained*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3;
	float per;
	clrscr();
	printf("Enter the marks of students in 3 subjects");
	scanf("%d%d%d",&m1,&m2,&m3);
	per=(float)(m1+m2+m3)/3;
	printf("Percentage is %.2f",per);
	printf("\nClass is%c",32);

	if(per<35)
		printf("fail");
	if(per>=35 && per<50)
		printf("pass class");
	if(per>=50 && per<60)
		printf("first class");
	if(per>=60 && per<75)
		printf("second class");
	if(per>=75)
		printf("distinction");
	getch();
}

