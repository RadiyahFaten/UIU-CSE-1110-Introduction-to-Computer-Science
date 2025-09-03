#include <stdio.h>
#define ID 112430306
#define PASSWORD 82646873 // nickname RADI

int main()
{
    int id, password;
    printf("Enter your UIU student ID: ");
    scanf("%d", &id);

    switch (id == ID)
    {
    case 1:
        printf("Enter your password:");
        scanf("%d", &password);
        switch (password == PASSWORD)
        {
        case 1:
            switch (password > 0)
            {
            case 1:
                printf("Birth date: August 1, 2005");
                break;
            case 0:
                printf("Incorrect Password!");
            }
            break;
        case 0:
            printf("Incorrect Password!");
            break;
        }
        break;
    case 0:
        printf("Incorrect ID");
    }
}
