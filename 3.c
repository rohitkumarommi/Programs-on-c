#include<stdio.h>
int main()
{
char x[10] , *ptr =x;
scanf("%s",x);
change(&x[4]);
}
change (char a[])
{
	puts(a);
	}
