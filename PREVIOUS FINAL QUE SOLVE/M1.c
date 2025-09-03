#include <stdio.h>
#include <math.h>
int main()
{
    float energy, mass;
    printf("Enter energy and mass:");
    scanf("%f %f", &energy, &mass);

    float c = sqrt (energy/ mass);
    printf("%0.3f", c);
}
