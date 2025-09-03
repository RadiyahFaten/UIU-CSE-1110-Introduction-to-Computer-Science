#include <stdio.h>

int main ()
{
    int a;

     printf("Enter angle:");
     scanf("%d", &a);

     if ( a > 0 && a < 90)
     {
         printf("First Quadrant");

     }
     else if ( a > 90  && a < 180)
     {
         printf("Second Quadrant");
     }
     else if ( a > 180  && a < 270)
     {
         printf("Third Quadrant");
     }
     else if ( a > 270  && a < 360)
     {
         printf("Second Quadrant");
     }
     else if ( a == 0  || a == 180)
     {
         printf("X- Axis");
     }
     else if ( a == 90  || a == 270)
     {
         printf("Y- Axis");
     }
}
