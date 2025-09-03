#include <stdio.h>
int main ()
{
    int choice, b, h, a;
    printf("Enter choice:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter base and height of triangle:");
            scanf("%d %d", &b, &h);
            printf("Area of triangle is: %d square units", (b*h) / 2);

        break;

        case 2:
            printf("Enter side of square:");
            scanf("%d", &a);
            printf("Area of square is: %d square units", a*a);
        break;

        default:
            printf("Invalid");
    }
}
