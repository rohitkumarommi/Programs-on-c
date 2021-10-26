#include <stdio.h>

int main()
{
    int num , n, i, sum = 0;
    printf("enter a number:");
    scanf("%d", &num);
    
    if((num % 2 ) == 0)
    {
    printf("it is even so add numbers\n");
    printf("\nsay how many numbers you want to add:");
    scanf("%d",&n);
    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    
    }

    printf("Sum = %d", sum);
    return 0;
}
else
 printf("\nwrong input\n");
}
