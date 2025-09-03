#include <stdio.h>
int main()
{
    int c;
    printf("Enter the single character:");
    scanf("%c", &c);

    if (c >= '!' && c <= '/')
    {
        printf("Special");
    }
    else if (c >= '0' && c <= '9')
    {
        printf("Digit");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("Alphabet");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("Alphabet");
    }
}