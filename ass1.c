#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, row, space;
    int k = 0;
    printf("Please enter number of row");
    scanf("%d", &row);
    for (int i = 0; i <= row; i++)
    {

        for (int x = 0; x < row - i; x++)
        {
            printf(" ");
        }
        for (int y = 0; y < i * 2 - 1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
}