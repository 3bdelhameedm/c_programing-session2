#include <stdio.h>
#include <stdlib.h>
int main(void)
{

float num;
    float av = 0;
    float sum = 0;

    printf("Enter the 10 numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%f", &num);
        sum = sum + num;
    }
    av = sum / 10;
    printf("the sum of 10 is :%f \nthe avarege is %f :", sum, av);
}