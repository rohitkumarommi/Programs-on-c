#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("enter the numnber:");
	scanf("%d",&n);
	printf("factorial of number is:%d\n",fact(n));
}
int fact(int n)
{

	if (n == 0)  
    return 1;  
  else  
    return(n * fact(n-1));  
}  

