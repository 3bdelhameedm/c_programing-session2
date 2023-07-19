#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int id, ID, pass;
    printf("please enter your ID :");
    scanf("%d", &id);

    if (id == 1234)
    {
        printf("please enter your password :");
        scanf("%d", &pass);
        if (pass == 7788)
        {
            printf("Welcome Ahmed");
        }
        else
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Try again :");
                scanf("%d", &pass);
                if (pass == 7788)
                {
                    printf("Welcome Ahmed");
                    break;
                }
                if (i == 1)
                {
                    printf("incorrect password for 3 times,no more tries");
                }
            }
        }
    }
  else if (id == 5678)
    {
        printf("please enter your password :");
        scanf("%d", &pass);
        if (pass == 5566)
        {
            printf("Welcome Amr");
        }
        else
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Try again :");
                scanf("%d", &pass);
                if (pass == 5566)
                {
                    printf("Welcome Amr");
                    break;
                }
                if (i == 1)
                {
                    printf("incorrect password for 3 times,no more tries");
                }
            }
        }
    }
     else if (id == 9870)
    {
        printf("please enter your password :");
        scanf("%d", &pass);
        if (pass == 1122)
        {
            printf("Welcome Wael");
        }
        else
        {
            for (int i = 0; i < 2; i++)
            {
                printf("Try again :");
                scanf("%d", &pass);
                if (pass == 1122)
                {
                    printf("Welcome Wael");
                    break;
                }
                if (i == 1)
                {
                    printf("incorrect password for 3 times,no more tries");
                }
            }
        }
    }
    else
    {
        printf("Your are not registered");
    }

}