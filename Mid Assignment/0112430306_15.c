#include <stdio.h>

int main()
{
     float a;
    printf("Please enter a floating value: ");
    scanf(" %f", &a);
    printf("(a) Val:%10f\n", a); //it does not match sample output
    printf("(b) Val:%2f\n", a);
    printf("(c) Val:%.2f\n", a);
    printf("(d) Val:%.0f\n", a);
    printf("(e) Val:%e\n", a);
    return 0;
}
