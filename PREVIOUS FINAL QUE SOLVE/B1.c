#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main ()
{
    int x, y, h, k;

    printf("Enter x, y coordinates of a point on circle: ");
    scanf("%d %d", &x, &y);

    printf("Enter center coordinates of the circle: ");
    scanf("%d %d", &h, &k);

    float r= sqrt(pow((x -h), 2) + pow ((y-k), 2));
    float area = pi*r*r;
    float cir = 2*pi*r;

    printf("Area=%f ", area);
    printf("\nCircumference=%f ", cir );
}
