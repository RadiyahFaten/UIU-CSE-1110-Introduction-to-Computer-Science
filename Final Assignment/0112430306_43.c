#include <stdio.h>
int main()
{
    float a, b, choice;
    printf("Enter the two numbers:");
    scanf("%f %f", &a, &b);
    printf("Enter your choice:");
    scanf("%f", &choice);

    if (choice >= 1 && choice <= 4)
    {
        if (choice == 1)
        {
            printf("%f", a + b);
        }
        else if (choice == 2)
        {
            printf("%f", a - b);
        }
        else if (choice == 3)
        {
            printf("%f", a * b);
        }
        else if (choice == 4)
        {
            printf("%f", a / b);
        }
    }
    else
    {
        printf("Invalid choice");
    }
}
