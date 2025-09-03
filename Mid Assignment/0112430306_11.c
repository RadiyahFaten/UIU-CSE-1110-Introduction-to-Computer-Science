#include <stdio.h>

int main ()
{
   unsigned int a;
   a = 4294967295;
   printf("The unsigned int value: %u\n", a);
   unsigned long int b;
   b =4294967295;
   printf("The unsigned long int value: %lu\n", b);
   unsigned long long int c;
   c = 18446744073709551615ULL; //ULL is used to avoid overflow for unsigned long long int
   printf("The unsigned long long int value: %llu\n", c);
   unsigned short int d;
   d = 65535;
   printf("The unsigned short value: %hu" , d);

}
