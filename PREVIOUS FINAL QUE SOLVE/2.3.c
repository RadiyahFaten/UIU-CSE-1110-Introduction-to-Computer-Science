#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("Enter the values:");
    scanf("%d %d %d", &a, &b, &c);

    if ( a > b || a > c)
    {
         if ( a % 2== 0)
        {
            printf("Even, Blue Number");
        }
        else
        {
            printf("Odd, Red Number");
        }
    }
    else if (b > a && b >c)
    {
         if ( a % 2== 0)
        {
            printf("Even, Blue Number");
        }
        else
        {
            printf("Odd, Red Number");
        }
    }
    else if (c > a && c >b)
    {
         if ( a % 2== 0)
        {
            printf("Even, Blue Number");
        }
        else
        {
            printf("Odd, Red Number");
        }
    }

}
