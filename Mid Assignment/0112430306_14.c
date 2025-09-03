#include <stdio.h>

int a = 20;
 int main ()
{
    printf("A. Global: %d\n", a);
    int a = 40;
    printf("B. Local: %d\n", a);

{
     extern int a;
        printf("C. Global: %d", a);
}
    return 0;
}

