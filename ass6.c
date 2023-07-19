#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int num1 ,num2 ,num3;
printf("Enter number 1");
scanf("%d",&num1);
printf("Enter number 2");
scanf("%d",&num2);
printf("Enter number 3");
scanf("%d",&num3);
if (num1>num2 &&num1>num3)
{
    printf("maximum number is %d",num1);
}
else if(num2>num1 &&num2>num3)
{
        printf("maximum number is %d",num2);

}
else if(num3>num1 &&num3>num2)
{
        printf("maximum number is %d",num3);

}
else {
            printf("the three number are equal");

}

}