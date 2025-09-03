#include <stdio.h>
int main()
{
    int id;
    char operation;
    printf("enter the last four digits of ID:");
    scanf("%d", &id);
     printf("enter the operation:");
    scanf(" %c", &operation);

    int l = id % 10;
    int l1 =  l+l+l;
    int l2 = l-l-l;
    int l3 = l*l*l;

    switch (operation)
    {
        case '+':
            printf( "%d + %d + %d = %d" , l, l, l, l1);
        break;

        case '-':
            printf( "%d - %d - %d = %d" , l, l, l, l2);
        break;

        case '*':
            printf( "%d * %d * %d = %d" , l, l, l, l3);
        break;
        default:
            printf("Invalid");

    }
}
