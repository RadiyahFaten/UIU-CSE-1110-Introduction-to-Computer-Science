#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);

    if (a > 0)
    {
        if (ceil(log2(a)) == floor(log2(a)))
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("Invalid. Put a non zero positive number");
    }
}