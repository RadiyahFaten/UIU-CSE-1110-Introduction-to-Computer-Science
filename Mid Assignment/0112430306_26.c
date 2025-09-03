#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    printf("%d\n", (a + b) <= 80 && b >= 0);
    printf("%d\n", (a - b) == 0 || c !=0);
    printf("%d\n", a != b || (b< a)&& c > 0);
    return 0;
}
