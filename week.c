#include<stdio.h>

int main( )

{

     int day;

     printf("nEnter the number of the day:");

     scanf("%d",&day);

     if (day==1)
     {
    	 printf("sunday");
     }
		else if(day==2)
		{
			printf("monday");
		}
     else
     {
	printf("not a day");
     }
}
