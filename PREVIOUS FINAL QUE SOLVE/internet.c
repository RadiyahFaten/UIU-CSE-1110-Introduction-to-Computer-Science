#include <stdio.h>
int main ()
{
    int choice, gb;
    printf("Select the data package:\n 1. Basic Package\n 2. Standard Package\n 3. Premium Package");
    printf("\nEnter your choice:");
    scanf("%d", &choice);

    if ( choice == 1)
    {
        printf("Number of GB:");
        scanf("%d", &gb);
        float cost = gb*50;
        printf("You selected the Basic Package. \n The total charge of your package is: %f", cost);
    }
    else if ( choice == 2)
    {
        printf("Number of GB:");
        scanf("%d", &gb);
        float cost = gb*100;
        printf("You selected the Standard Package. \n The total charge of your package is: %f", cost);
    }
    else if ( choice == 3)
    {
        printf("Number of GB:");
        scanf("%d", &gb);
        float cost = gb*150;
        printf("You selected the Premium Package. \n The total charge of your package is: %f", cost);
    }
    else
    {
        printf("Invalid package type selected");
    }

}
