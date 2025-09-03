#include <stdio.h>
#define pi 3.14159
int main ()
{
    float r, a;

    printf("Enter the radius:");
    scanf("%f", &r);

    printf("Enter the side:");
    scanf("%f", &a);

    float c_area = pi*r*r;
    float s_area = a*a;
    float shaded_area = s_area - c_area;

    printf("Shaded Area = %f", shaded_area);

}
