#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three values:");
    scanf("%d %d %d", &a, &b, &c);

    switch (a > b && a >c)
    {
        case 1:
            switch( a % 2 ==0)
            {
                case 1:
                    printf("Red number");
                break;

                case 0:
                    switch( a % 3 ==0)
                    {
                        case 1:
                            printf("Blue number");
                        break;

                        case 0:
                             switch( a % 2 ==0 && a % 3 ==0)
                             {
                                 case 1:
                                     printf("Purple Number");
                                break;

                                 case 0:
                                     printf("White Number");
                                break;
                             }
                        break;
                    }
                break;
            }
        break;

        case 0:
                                                switch (b > a && b >c)
                                {
                                    case 1:
                                        switch( b % 2 ==0)
                                        {
                                            case 1:
                                                printf("Red number");
                                            break;

                                            case 0:
                                                switch( b % 3 ==0)
                                                {
                                                    case 1:
                                                        printf("Blue number");
                                                    break;

                                                    case 0:
                                                         switch( b % 2 ==0 && b % 3 ==0)
                                                         {
                                                             case 1:
                                                                 printf("Purple Number");
                                                            break;

                                                             case 0:
                                                                 printf("White Number");
                                                            break;
                                                         }
                                                    break;
                                                }
                                            break;
                                        }
        break;

        case 0:
                                                        switch (c > b && c > a)
                                        {
                                            case 1:
                                                switch( c % 2 ==0)
                                                {
                                                    case 1:
                                                        printf("Red number");
                                                    break;

                                                    case 0:
                                                        switch( c % 3 ==0)
                                                        {
                                                            case 1:
                                                                printf("Blue number");
                                                            break;

                                                            case 0:
                                                                 switch( c % 2 ==0 && c % 3 ==0)
                                                                 {
                                                                     case 1:
                                                                         printf("Purple Number");
                                                                    break;

                                                                     case 0:
                                                                         printf("White Number");
                                                                    break;
                                                                 }
                                                            break;
                                                        }
                                                    break;
                                                }
                                            break;

                                        }
        break;

    }
        break;

    }
}
