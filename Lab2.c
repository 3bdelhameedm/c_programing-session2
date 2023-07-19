#include <stdio.h>
#include <stdlib.h>
int sum(int num1, int num2);
int get_max(int num1,int num2);

int num1, num2;
int z;
int main(void)
{
    int returnvalue = sum(8, 10);
    printf("sum:%d", returnvalue);
    get_max(8,10);
}
int sum(int num1, int num2)
{

    z = num1 + num2;
    return z;
}
int get_max(int num1,int  num2)
{
    int maxv;
    if (num1 > num2)
    {
        maxv = num1;
    }
    else if (num1 < num2)
    {
        maxv = num2;
    }
    else
    {
        printf("Equal values");
    }
        printf("\nMax:%d",maxv);
}