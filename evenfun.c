#include<stdio.h>
int sum(int);
int main()
{
int n;
printf("enter the series upto:\n");
scanf("%d",&n);
printf("sum of %d even numbers is :%d\n",n,sum(n));
return 0;
}
int sum(int n)
{
int i,sum=0;
for(i=1;i<=n;i++)
{
if(i%2==0)
{
sum=sum+i;
}
}
return sum;
}
