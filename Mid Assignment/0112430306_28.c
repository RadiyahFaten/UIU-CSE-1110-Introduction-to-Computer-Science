#include <stdio.h>
#include <math.h>
int main ()
{
    float x;
    printf("Enter the value:");
    scanf("%f", &x);
    printf("%f", 2 * pow(cos(x), 2) - sqrt(3) * sin(x) + sin(x / 2)  );
    return 0;
}
