#include <stdio.h>
#include <math.h>
int main ()

{
    float x, y;
    printf("Enter the value of x and y: ");
    scanf("%f %f", &x, &y);

    float f1= pow(x,3) + 5*x*y;
    float f2= 4*y;
    float f3= 1 / (x + y);

    if ( x < 0 && y < 0)
    {
        printf("%0.3f", f1);
    }
    else if (x < 0 && y > 0)
    {
        printf("%0.3f", f2);
    }
    else if (x >= 0)
    {
        printf("%0.3f", f3);
    }
    else
    {
        printf("Undefined");
    }
}
