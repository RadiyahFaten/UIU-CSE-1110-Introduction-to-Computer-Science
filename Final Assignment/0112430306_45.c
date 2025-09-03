#include <stdio.h>
int main()
{
    float a, b;
    int choice, Case;
    printf("Enter the two numbers:");
    scanf("%f %f", &a, &b);
    printf("Enter your choice:");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        if (b != 0)
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
                printf("Enter your case: ");
                scanf("%d", &Case);
                if (Case >= 1 && Case <= 2)
                {
                    if (Case == 1)
                    {
                        printf("%f", a / b);
                    }
                    else
                    {
                        printf("%d", (int)a % (int)b);
                    }
                }
            }
        }
        else
        {
            printf("Error: Divisor is zero");
        }
    }
    else
    {
        printf("Invalid choice");
    }
}
