#include <stdio.h>
int main ()
{
    int x, y;
    printf("Enter x and y:");
    scanf("%d %d", &x, &y);

    switch(x ==0 && y==0)
    {
        case 0:
             switch ( x == 0 && y != 0)
             {
                    case 1:
                        printf("Y- axis");
                    break;

                    case 0:
                        switch ( x != 0 && y == 0)
                             {
                                    case 1:
                                        printf("X- axis");
                                    break;

                                    case 0:
                                        switch ( x > 0  && y > 0)
                                             {
                                                    case 1:
                                                        printf("1st Quadrant");
                                                    break;

                                                    case 0:
                                                         switch ( x < 0  && y > 0)
                                                                 {
                                                                        case 1:
                                                                            printf("2nd Quadrant");
                                                                        break;

                                                                        case 0:
                                                                             switch ( x < 0  && y < 0)
                                                                                     {
                                                                                            case 1:
                                                                                                printf("3rd Quadrant");
                                                                                            break;

                                                                                            case 0:
                                                                                                 switch ( x > 0  && y < 0)
                                                                                                         {
                                                                                                                case 1:
                                                                                                                    printf("4th Quadrant");
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
        break;

        case 1:
            printf("Center");
        break;

    }
}
