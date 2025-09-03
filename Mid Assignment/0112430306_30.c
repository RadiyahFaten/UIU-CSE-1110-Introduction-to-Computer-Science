#include <stdio.h>
int main()
{
    int a = sizeof (int);
    printf("Size of int in byte(s) = %d\n", a);
    int  b = sizeof (float);
    printf("Size of float in byte(s) = %d\n", b);
    int c = sizeof (double);
    printf("Size of double in byte(s) = %d\n", c);
    int d = sizeof (char);
    printf("Size of char in byte(s) = %d", d);

}
