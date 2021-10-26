#include<stdio.h>
int area (int l,int b);
int main()
{
 int length, bredth,total;
 printf("enter the length and bredth:\n");
 scanf("%d %d",&length,&bredth);
 total = area(length,bredth);
 printf("area is:%d\n",total);
 return 0;
 }
 int area (int l,int b)
 {
 int c ;
  c=l*b;
  return c;
  }
