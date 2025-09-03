#include <stdio.h>
int main()
{
    int day;
    printf( "Day:" );
    scanf("%d", &day);
    int year = day / 360;
    int rem_without_year = day % 360;
    int month = rem_without_year / 30;
    int rem_without_month = rem_without_year % 30;
    printf("%d years, %d months and %d days ",  year, month, rem_without_month);
}
