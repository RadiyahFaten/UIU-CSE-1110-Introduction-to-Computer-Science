#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the values:");
    scanf("%d %d %d", &a, &b, &c);

    switch ( a < b && a < c)
    {
        case 1:
                switch( a % 2 == 0)
                {
                    case 0:
                        printf("Odd, Red Number");
                    break;

                    case 1:
                        printf("Even, Blue Number");
                    break;
                }
        break;

        case 0:
                switch (b < a && b < c)
                {
                    case 1:
                                switch( a % 2 == 0)
                {
                    case 0:
                        printf("Odd, Red Number");
                    break;

                    case 1:
                        printf("Even, Blue Number");
                    break;
                }
                    break;

                    case 0:
                                switch ( c < a && c < b)
                                {
                                    case 1:
                                            switch( a % 2 == 0)
                                            {
                                                case 0:
                                                    printf("Odd, Red Number");
                                                break;

                                                case 1:
                                                    printf("Even, Blue Number");
                                                break;
                                            }
                                    break;
                                }
                    break;
                }
        break;

    }
}
