#include <stdio.h>
int main()
{
    int x, n1, n2, n3;
    printf("Player-1, enter a number:");
    scanf("%d", &x);
    printf("Player-2, Guess a number:");
    scanf("%d", &n1);

    if (x == n1)
    {
        printf("Right, Player-2 wins!");
    }
    else
    {
        printf("\nWrong, 2 Chance(s) left!");
        printf("\nPlayer-2, Guess another number:");
        scanf("%d", &n2);
        if (x == n2)
        {
            printf("\nRight, Player-2 wins!");
        }
        else
        {
            printf("\nWrong, 1 Chance(s) left!");
            printf("\nPlayer-2, Guess another number:");
            scanf("%d", &n3);
            if (x == n3)
            {
                printf("\nRight, Player-2 wins!");
            }
            else
            {
                printf("\nWrong, 0 Chance(s) left!");
                printf("\nPlayer-1 wins!");
            }
        }
    }
}
