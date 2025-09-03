#include <stdio.h>
int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);

    switch (grade >= 90 && grade <= 100)
    {
    case 1:
        printf("A");
        break;
    case 0:
        switch (grade >= 86 && grade <= 89)
        {
        case 1:
            printf("A-");
            break;
        case 0:
            switch (grade >= 82 && grade <= 85)
            {
            case 1:
                printf("B+");
                break;
            case 0:
                switch (grade >= 78 && grade <= 81)
                {
                case 1:
                    printf("B");
                    break;
                case 0:
                    switch (grade >= 74 && grade <= 77)
                    {
                    case 1:
                        printf("B-");
                        break;
                    case 0:
                        switch (grade >= 70 && grade <= 73)
                        {
                        case 1:
                            printf("C+");
                            break;
                        case 0:
                            switch (grade >= 66 && grade <= 69)
                            {
                            case 1:
                                printf("C");
                                break;
                            case 0:
                                switch (grade >= 62 && grade <= 65)
                                {
                                case 1:
                                    printf("C-");
                                    break;
                                case 0:
                                    switch (grade >= 58 && grade <= 61)
                                    {
                                    case 1:
                                        printf("D+");
                                        break;
                                    case 0:
                                        switch (grade >= 55 && grade <= 57)
                                        {
                                        case 1:
                                            printf("D");
                                            break;
                                        default:
                                            printf("F");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
