#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter  x and y:");
    scanf("%d %d", &x, &y);

    if ( x == 0 && y== 0)
    {
        printf("Center");
    }
    else if ( x ==0 && y != 0)
    {
        printf("Y- axis");
    }
    else if ( y ==0 && x != 0)
    {
        printf("X- axis");
    }
    else if ( x > 0 && y > 0)
    {
        printf("1st Quadrant");
    }
    else if ( x < 0 && y > 0)
    {
        printf("2nd Quadrant");
    }
    else if ( x < 0 && y < 0)
    {
        printf("3rd Quadrant");
    }
    else if ( x > 0 && y < 0)
    {
        printf("4th Quadrant");
    }
    else
    {
        printf("invalid");

    }
}
