#include <stdio.h>

int main()
{
    int i;
    int k;

    printf("Enter i : ");
    scanf("%d", &i);

    for (int horizontal = 1; horizontal <= i; horizontal++)
    {
        for (int vertical = 1; vertical <= (2 * i ) -1; vertical++)
        {
            if (vertical >= i + 1 - horizontal && vertical <= i - 1 + horizontal && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}