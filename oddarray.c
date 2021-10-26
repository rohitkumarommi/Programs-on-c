#include<stdio.h>
int main()
{
int a[10],n,i;
printf("enter size of array:\n");
scanf("%d",&n);
for( i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("odd numbers are:\n");
for( i=0;i<n;i++ )
{
	if(a[i]%2!=0)
	{
	 printf("%d\n",a[i]);
	}
	return 0;
}
}
	 
	
	
	
	
	
	
