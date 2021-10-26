#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	clrscr();
	printf("enter year to know leap year or not:");
	scanf("%d",&year);
	
	if(year%4==0)
		{
		printf("leap year\n");
		}
	else
	{
	printf("not a leap year\n");
	}
return 0;
}
