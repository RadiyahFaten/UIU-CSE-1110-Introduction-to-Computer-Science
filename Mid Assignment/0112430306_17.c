#include <stdio.h>
#define PI 3.1415
int main ()
{
    float radius;
    printf("The value of radius: ");
    scanf("%f", &radius);
    float area= PI*radius*radius;
    printf("Area: %0.3f", area);
    return 0;
}
