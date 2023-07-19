
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int grade;
    printf("enter your grade");
    scanf("%d", &grade);
    if (grade < 50)
    {
        printf(" failde");
    }
    else if (grade >= 50 && grade < 65)
    {
        printf("normal");
    }
    else if (grade >= 65 && grade < 75)
    {
        printf("good");
    }
    else if (grade >= 75 && grade < 85)
    {
        printf("very good");
    }
    else if (grade >= 85)
    {
        printf("excelent");
    }
    else
    {
                printf("error");

    }
}