#include <stdio.h>

int main ()
{
  int x;
  printf("The uninitialized variable:");
  scanf("%d",&x);
  printf("%d",x);
  int y = 7;
  printf("\nThe initialized variable: %d", y);
  int t = 7,  z= 78, m =9;
  printf("\nMultiple variable with different values =%d, %d, %d", t, z, m );
  float w = 98.78, u = 98.78, r = 98.78;
  printf("\nMultiple values with the same value: %0.2f, %0.2f, %0.2f", w, u, r);
  return 0;
}
