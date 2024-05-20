#include <stdio.h>

int main()
{
    int i;

    printf("Enter i : ");
    scanf("%d", &i);

    for (int horizontal = 1; horizontal <= i; horizontal++)
    {
        for (int vertical = 1; vertical <= i; vertical++)
        {
            if (vertical >= i - (i - horizontal))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}