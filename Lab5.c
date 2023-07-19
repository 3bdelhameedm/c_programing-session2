#include <stdio.h>
#include <stdlib.h>
int main(void)
{

int id;
    printf("please enter your ID");
    scanf("%d", &id);
    switch (id)
    {
    case 1234:
        printf("welcome Ahmed");
        break;
    case 5678:
        printf("welcome yousef");
        break;
    case 1145:
        printf("welcome mina");
        break;
    default:
        printf("Wrong ID");

        break;
    }


}