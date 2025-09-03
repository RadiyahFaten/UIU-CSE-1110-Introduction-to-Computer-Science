#include <stdio.h>
int main ()
{
    long int a;
    a= 2147483647;
    printf("The long int value: %ld\n", a);
    long long int b;
    b = 9223372036854775807;
    printf("The long long int value: %lld\n", b);
    long double c;
    c = 1.1e+4932L; //L is add to avoid overflow in long double
    printf("The long double value:%Le\n", c); //value not printable in some operating systems.

    return 0;
}
