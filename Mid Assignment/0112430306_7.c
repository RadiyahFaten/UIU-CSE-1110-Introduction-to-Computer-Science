#include <stdio.h>
int main ()
{
    int x;
    printf("The integer value:\n");
    scanf("%d", &x);
    printf("%d",x);

    float y;
    printf("\nThe floating point value:");
    scanf("%f", &y);
    printf("%0.2f\n",y);
    char z;
    printf("\nThe character value: ");
    scanf(" %c", &z);
    printf("%c", z);
    return 0;
}
