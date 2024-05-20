#include <stdio.h>

int main()
{
    int i;
    int k = 0;
    int n;

    printf("Enter i : ");
    scanf("%d", &i);

    n = (i + 1) / 2;

    for (int horizontal = 1; horizontal <= i; horizontal++)
    {
        if (horizontal <= n)
        {
            k++;
        }
        else
        {
            k--;
        }
        for (int vertical = 1; vertical <= i; vertical++)
        {
            if (vertical >= n + 1 - k && vertical <= n - 1 + k)
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