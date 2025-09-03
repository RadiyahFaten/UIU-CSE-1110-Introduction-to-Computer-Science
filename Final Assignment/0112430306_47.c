#include <stdio.h>
#include <math.h>

int main()
{
    char char_input;
    double x, y, z;

    printf("Enter a character:");
    scanf("%c", &char_input);

    printf("Enter three numbers:");
    scanf("%lf %lf %lf", &x, &y, &z);

    if (char_input == 'a' || char_input == 'A')
    {
        printf("Output: %.2lf", sqrt(x) + pow(y, 4) + 6 * z);
    }
    else if (char_input == 'b' || char_input == 'B')
    {
        printf("Output: %.2lf", (int)x % (int)y / z);
    }
    else if (char_input == 'c' || char_input == 'C')
    {
        printf("Output: %c %c %c", (int)x, (int)y, (int)z);
    }
    else
    {
        printf("Wrong Input");
    }
}