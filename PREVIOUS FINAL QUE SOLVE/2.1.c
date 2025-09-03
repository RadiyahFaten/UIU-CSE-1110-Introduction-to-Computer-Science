#include <stdio.h>
#define pi 3.1416
int main ()
{
    float r;
    printf("Enter the radius:");
    scanf("%f", &r);

    float v = (4/3.0);
    printf("%f", v);
    float V = v*pi*r*r*r;
    float A = 4*pi*r*r;
    printf("Volume ==%f", V);
    printf("\nArea == %f", A);
}
