#include <stdio.h>
int main ()
{
    char choice;
    float l, w;
    printf("Enter choice:");
    scanf("%c", &choice);
    printf("Enter length and width:");
    scanf("%f %f", &l, &w);

    if ( choice == 'A')
    {
        printf("The area of the rectangle is: %f", l*w);
    }
    else if ( choice == 'P')
    {
        float perimeter = 2.0*(l + w);
        printf("The perimeter of the rectangle is: %f", perimeter );
    }
}
