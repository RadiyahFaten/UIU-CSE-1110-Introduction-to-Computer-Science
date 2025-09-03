#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%f", &num);

    switch (num >= 0)
    {
    case 1:
        printf("Positive");
        break;

    case 0:
        printf("Negative");
    }
}
