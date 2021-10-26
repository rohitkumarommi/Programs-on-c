#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],n,m,i,j,k;
	printf("enter the number of rows:");
	scanf("%d",&n);
	printf("enter the number of columns:");
	scanf("%d",&m);
	printf("enter first matrix:\n");
	if(n<=10 && m<=10)
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d" , &b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j] =0;
			for(k=0;k<n;k++)    
			{    
				c[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}
	printf("multiply is:\n");
	for(i=0;i<n;i++)    
		{    
			for(j=0;j<m;j++)    
				{    
					printf("%d\t",c[i][j]);    
				}    
			printf("\n");    
		}     
	}  		    
	else
	{
		printf("enter less size! of rows and coloumns");
	}
	return 0;
}
	
	
	
	
	
