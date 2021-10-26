#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		printf("enter array for [%d][%d]:",i,j);
		scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		printf("aray you entered is:%d",a[i][j]);
		}
	}

}




