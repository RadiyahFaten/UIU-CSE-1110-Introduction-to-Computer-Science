#include <stdio.h>

int main()
{
    float num;
    printf("Enter the number:");
    scanf("%f", &num);

    if (num >= 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
}