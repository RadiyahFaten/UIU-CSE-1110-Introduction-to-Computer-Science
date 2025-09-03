#include <stdio.h>

int main()
{
    int a, b, c, m1, m2, m3;
    scanf("%d %d %d", &a, &b, &c);

    m1 = a + b*c;
    m2 = b + c*a;
    m3 = c + a*b;

    if (m1 > m2 && m1 > m3)
    {
        printf("Maximum value: %d", m1);
    }
    else if (m2 > m1 && m2 > m3)
    {
        printf("Maximum value: %d", m2);
    }
    else if (m3 > m1 && m3 > m2)
    {
        printf("Maximum value: %d", m3);
    }
}
