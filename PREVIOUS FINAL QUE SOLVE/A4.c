#include <stdio.h>
int main ()
{
    int a, b, c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);

   if (a < b && a < c)
   {
       printf("Minimum: %d", a);
   }
   else if (b < a && b < c)
   {
       printf("Minimum: %d", b);
   }
   else if (c < a && c < b)
   {
       printf("Minimum: %d", c);
   }
}
