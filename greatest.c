#include<stdio.h>

int main( )
   {
       int a,b,c;
      printf("Enter the values of a, b and c\n");
    	scanf("%d %d %d", &a, &b, &c);
      printf("a = %d\tb = %d\tc = %d\n", a, b, c);
       if(a>b)
          {
             if(a>c)
               {
                 printf("\n nGreatest is: a \n" );
                }
              else if(c>a)
                     {
                      printf("\n nGreatest is: c");
                     }
            }
         else if(b>c)     //outermost if-else block
                {
                 printf("\nnGreatest is: b" );
                }
               else
                {
                 printf( "\n nGreatest is: c" );
                }
      return 0;
    }
