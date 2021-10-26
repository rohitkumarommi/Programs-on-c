#include<stdio.h>
int main()
{
	int r1=0,r2=1,r3,a,i;
	printf("enter range:");
	scanf("%d",&a);
	printf("%d%d",r1,r1);
	for(i=0;i<a;i++)
	{
		r3=r1+r2;
		printf("%d\t",r3);
		r1=r2;
		r2=r3;
	}
	return 0;
}		
