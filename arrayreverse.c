#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("reversed array is:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
