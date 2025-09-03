#include <stdio.h>
int main ()
{
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
    {
        float f;
        printf("F:");
        scanf("%f", &f);

        printf("The temperature in C is %0.2f degree C", ((5 / 9.0)* (f- 32)));
    }

     else if (choice == 2)
    {
        float c;
        printf("C:");
        scanf("%f", &c);

        printf("The temperature in F is %0.2f degree F", (9 / 5.0* c + 32));
    }
    else
    {
        printf("Invalid");
    }

}
