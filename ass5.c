#include <stdio.h>
#include <stdlib.h>
int add(void);
int sub(void);
int mul(void);
int and (void);
int or (void);
int not(void);
int Xor(void);
int Reminder(void);
int increment(void);
int decrement(void);
int divde(void);

int num1, num2;

int main(void)
{
    int ID;
    printf("enter the operation ID");
    scanf("%d", &ID);
    switch (ID)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();

        break;
    case 4:
        divde();

        break;
    case 5:
        and();

        break;
    case 6:
        or ();

        break;
    case 7:
        not();

        break;
    case 8:
        Xor();

        break;
    case 9:
        Reminder();

        break;
    case 10:
        increment();
        break;
    case 11:
        decrement();
        break;
    default:
        printf("Error");
    }
}
int add(void)
{
    printf("Enter two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("add = %d", num1 + num2);
}
int sub(void)
{
    printf("Enter two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Sub = %d", num1 - num2);
}
int mul(void)
{
    printf("Enter two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Multiply = %d", num1 * num2);
}
int divde(void)
{
    printf("Enter two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("divide = %d", (num1 / num2));
}
int and(void)
{
    printf("Enter two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("And = %d", num1 & num2);
}
int or(void)
{
    printf("Enter two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Or = %d", num1 | num2);
}
int not(void)
{
    printf("Enter one operand");
    scanf("%d", &num1);

    printf("Not = %d", ~num1);
}
int Xor(void)
{
    printf("Enter Two operand");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Xor = %d", num1 ^ num2);
}
int Reminder(void)
{
    printf("Enter one operand");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Reminder = %d", num1 % num2);
}
int increment(void)
{
    printf("Enter one operand");
    scanf("%d", &num1);
    printf("increment = %d", ++num1);
}
int decrement(void)
{
    printf("Enter one operand");
    scanf("%d", &num1);

    printf("decremernt = %d", --num1);
}