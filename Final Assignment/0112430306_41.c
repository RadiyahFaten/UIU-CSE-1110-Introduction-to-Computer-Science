#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    char op;
    printf("Enter the operator:");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf(" Addition: %f", a + b);
    }
    else if (op == '-')
    {
        printf(" Subtraction: %f", a - b);
    }
    else if (op == '*')
    {
        printf(" Multiplication: %f", a * b);
    }
    else
    {
        if (b == 0)
        {
            printf("Zero as divisor is not valid!");
        }
        else
        {
            printf(" Division: %f", a / b);
        }
    }
}