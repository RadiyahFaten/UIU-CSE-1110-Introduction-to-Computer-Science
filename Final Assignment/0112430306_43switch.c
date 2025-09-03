#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("Enter the two numbers:");
    scanf("%d %d", &a, &b);
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break;
    case 4:
        printf("%d", a / b);
        break;
    }
}
