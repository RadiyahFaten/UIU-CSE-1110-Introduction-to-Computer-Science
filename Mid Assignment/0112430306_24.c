#include <stdio.h>
int main()
{
    float a, b,c;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);
    printf("X= %f\n", a - b / 3 + c * 2 -1);
    printf("Y= %f\n", a - (b / (3 + c) * 2)- 1);
    printf("Z= %f\n", a - ((b / 3) + c *2) - 1);

}
