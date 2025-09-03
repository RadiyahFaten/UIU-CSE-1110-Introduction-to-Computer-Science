#include <stdio.h>
#include <math.h>
int main ()
{
    int x, y;
    printf("Enter the values:");
    scanf("%d %d", &x, &y);

    int f1= pow (x, 3) + 5*x*y;
    int f2= 4*y;
    int f3= 1/ (int)(x + y);

    switch( x < 0 && y < 0)
    {
        case 1:
            printf("%d", f1);
        break;

        case 0:
                switch ( x < 0 && y > 0)
                {
                    case 1:
                            printf("%d", f2);
                    break;
                    case 0:
                            switch (x >= 0)
                            {
                                case 1:
                                    printf("%d", f3);
                                break;
                                case 0:
                                    printf("Undefined");
                                break;
                            }
                    break;
                }
        break;
    }
}
