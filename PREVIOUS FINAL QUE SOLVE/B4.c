#include <stdio.h>
int main ()
{
    float i, e, b;
    printf("Enter marks:");
    scanf("%f %f %f", &i, &e, &b);

    float avg= (i + e +b) / 3.0;
    printf("Average= %0.2f", avg);

    if ( avg >= 89 && avg <= 100)
    {
        printf("\nBrilliant");

    }
    else if ( avg >= 74 && avg <= 88)
    {
        printf("\nGood");
    }
     else if ( avg >= 55 && avg <= 73)
    {
        printf("\nModerate");
    }
     else if ( avg >= 0 && avg <= 54)
    {
        printf("\nBad");
    }
}
