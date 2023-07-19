#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int num1 ,num2;
for (; ;)
{
  printf("Please enter the first number ");
  scanf("%d",&num1);
    printf("Please enter the second number ");
  scanf("%d",&num2);
  printf("the sum is %d\n",num1+num2);
}

}