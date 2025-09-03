#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the incrementing/decrementing value of y : ");
    scanf("%d",&y);
    z = x;
    printf("Incremented value : %d\n", x +=y);
    printf("Decremented value : %d\n", z -=y);
    return 0;
}
