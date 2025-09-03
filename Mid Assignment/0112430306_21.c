#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    z = x;
    printf("Multiplication: %d\n", x*=y);
    printf("Division: %d", z /= y);
    return 0;
    }
