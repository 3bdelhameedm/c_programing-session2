#include <stdio.h>
#include <stdlib.h>
int num1;
int num2;
int swap(int num1, int num2);
int main(void)
{
printf(" num1  before swape :");
scanf("%d",&num1);
printf(" num2  before swape :");
scanf("%d",&num2);
swap(num1,num2);

}
int swap(int num1, int num2)
{

    int z = num1;
    num1 = num2;
    num2 = z;
printf("num1 after swap : %d\n",num1);
printf("num2 after swap : %d",num2);

}