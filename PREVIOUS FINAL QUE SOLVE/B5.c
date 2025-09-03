#include <stdio.h>
int main()
{
    int id;
    printf("Enter last four digit of ID:");
    scanf("%d", &id);

    int l = id % 10;
    printf("Sum: %d", l+1+l+2+l+3);

}
