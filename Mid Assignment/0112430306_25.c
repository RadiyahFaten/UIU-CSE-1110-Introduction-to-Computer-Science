#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    printf("Enter the value of c:");
    scanf("%d", &c);
    printf("%d\n", (a +b) <= 80 );
    printf("%d\n", !(a + c));
    printf("%d\n", a != 0);

}
