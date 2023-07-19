#include <stdio.h>
#include <stdlib.h>
int num1, num2, num3, num4;
int get_max(int num1, int num2, int num3, int num4);
int get_min(int num1, int num2, int num3, int num4);

int main(void)
{

    printf("Enter the first value");
    scanf("%d", &num1);
    printf("Enter the second value");
    scanf("%d", &num2);
    printf("Enter the third value");
    scanf("%d", &num3);
    printf("Enter the fourth value");
    scanf("%d", &num4);
    get_max(num1, num2, num3, num4);
    get_min(num1, num2, num3, num4);
}
int get_max(int num1, int num2, int num3, int num4)
{

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("the maximum value is %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("the maximum value is %d\n", num2);
    }
    else if (num3 > num2 && num3 > num1 && num3 > num4)
    {
        printf("the maximum value is %d\n", num3);
    }
    else if (num4 > num2 && num4 > num1 && num4 > num3)
    {
        printf("the maximum value is %d\n", num4);
    }
    else
    {
        printf("the four value are equal");
    }
    return 0;
}

int get_min(int num1, int num2, int num3, int num4)
{

    if (num1 < num2 && num1 < num3 && num1 < num4)
    {
        printf("the minimum value is %d", num1);
    }
    else if (num2 < num1 && num2 < num3 && num2 < num4)
    {
        printf("the minimum value is %d", num2);
    }
    else if (num3 < num2 && num3 < num1 && num3 < num4)
    {
        printf("the minimum value is %d", num3);
    }
    else if (num4 < num2 && num4 < num1 && num4 < num3)
    {
        printf("the minimum value is %d\n", num4);
    }

    return 0;
}
