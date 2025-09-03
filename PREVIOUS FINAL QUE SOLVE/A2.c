#include <stdio.h>
#define pi 3.14159
int main()
{
    int choice;
    float b, h, a;
    printf("Enter your choice:");
    scanf("%d", &choice);

    if ( choice == 1)
    {
        printf("Enter base and height of triangle: ");
        scanf("%f %f", &b, &h);
        printf("The area of the triangle is: %f square units ", 0.5*b*h);
    }

    else if ( choice == 2)
    {
        printf("Enter side of square: ");
        scanf("%f", &a);
        printf("The area of the square is: %f square units ", a*a);
    }
    else
    {
        printf("Invalid");
    }
}
