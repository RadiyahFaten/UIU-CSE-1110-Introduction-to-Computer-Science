#include <stdio.h>
int main ()
{
    int x, y;
    float a, b;
    printf("Enter the integer value : ");
    scanf("%d", &x);
    printf("Enter the float value : ");
    scanf("%f", &a);
    b = x;
    y = a;
    printf("Assignment: %d assigned to a float produces %f\n", x, b);
    printf("Assignment: %f assigned to an integer produces %d\n", a, y);
    printf("Type casting: (float) %d produces %f\n", x, (float) x);
    printf("Type casting: (integer) %f produces %d\n", a, (int) a);

}
