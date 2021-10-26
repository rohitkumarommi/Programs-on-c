#include<stdio.h>

int main
{
int a,b,c;
printf("enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
int d;
d=a+b+c;
printf("total is: %d",d);
}
else
{
	printf("sorry operation doesnt execute");
}
return 0;
} 

