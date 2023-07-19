#include <stdio.h>
#include <stdlib.h>
int fac=1;
int num;
int factorial(int num);
int main(void)
{
printf("Enter the number ");
scanf("%d",&num);
factorial(num);
}
int factorial(int num){
for (int i = 1; i <=num; i++)
{
fac=fac*i;

}
printf("the factorial of %d is :%d",num,fac);

}