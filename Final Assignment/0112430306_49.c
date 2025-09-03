#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter the operator:");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
        default: 
        printf("Invalid operation");
    }
}
