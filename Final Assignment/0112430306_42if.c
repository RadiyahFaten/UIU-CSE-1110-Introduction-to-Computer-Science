#include <stdio.h>
int main()
{
    float grade;
    printf("Enter your grade: ");
    scanf("%f", &grade);

    if (grade > 0)
    {
        if (grade >= 90 && grade <= 100)
        {
            printf("A");
        }
        else if (grade >= 86 && grade <= 89)
        {
            printf("A-");
        }
        else if (grade >= 82 && grade <= 85)
        {
            printf("B+");
        }
        else if (grade >= 78 && grade <= 81)
        {
            printf("B");
        }

        else if (grade >= 74 && grade <= 77)
        {
            printf("B-");
        }
        else if (grade >= 70 && grade <= 73)
        {
            printf("C+");
        }
        else if (grade >= 66 && grade <= 69)
        {
            printf("C");
        }
        else if (grade >= 62 && grade <= 65)
        {
            printf("C-");
        }
        else if (grade >= 58 && grade <= 61)
        {
            printf("D+");
        }
        else if (grade >= 55 && grade <= 57)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }

    else
    {
        printf("Invalid grade");
    }
}