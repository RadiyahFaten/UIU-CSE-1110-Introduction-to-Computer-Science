#include <stdio.h>
#include <math.h>

int main ()
{
int A, B;
float C, x;

printf("Enter the value of x:");
scanf("%f", &x);

A = ceil(x);
B = floor(x);
C = fabs(x);

printf ("Ceil %d, floor %d and absolute %0.3f", A, B, C);


}
