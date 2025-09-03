#include <stdio.h>
int main ()
{
    int choice;
    float km;

    printf("Select the service: \n 1. Car \n 2. Bus \3. Bike\n Enter your choice:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
                printf("Enter the distance:");
                scanf("%f", &km);
                float cost =  km*500;
                printf("You selected Car. \nThe total charge of your trip is: %f", cost);

        break;

        case 2:
                printf("Enter the distance:");
                scanf("%f", &km);
                float cost2 =  km*300;
                printf("You selected Bus. \nThe total charge of your trip is: %f", cost2);
        break;

        case 3:
                printf("Enter the distance:");
                scanf("%f", &km);
                float cost3 =  km*100;
                printf("You selected Bike. \nThe total charge of your trip is: %f", cost3);
        break;
    }
}
