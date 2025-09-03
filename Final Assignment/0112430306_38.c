#include <stdio.h>

int main()
{
  int x, y;
  printf("Enter the value of x:\n");
  scanf("%d", &x);
  printf("Enter the value of y:\n");
  scanf("%d", &y);

  if (x > y)
  {
    printf("%d is greater than %d", x, y);
  }
  if (x < y)
  {
    printf("%d is less than %d", x, y);
  }
  if (x == y)
  {
    printf("%d is equal to %d", x, y);
  }
}