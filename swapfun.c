#include<stdio.h>
int swap(int* ,int* );
void main()
{
int a,b;
printf("enter the a");
scanf("%d",&a);
printf("enter the b");
scanf("%d",&b);
swap(&a,&b);
printf("swapped numbers are: %d %d",a,b);
}
int swap(int *a ,int *b )
{
 int *y;
 y=*b;
 *b=*a;
 *a=y;
 return 0;
}
