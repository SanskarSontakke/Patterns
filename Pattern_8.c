#include <stdio.h>

int main()
{
    int i;
    int k = 0;
    int l = 1;

    printf("Enter i : ");
    scanf("%d", &i);

    for (int horizontal = 1; horizontal <= i; horizontal++)
    {
        for (int vertical = 1; vertical <= (2 * i) - 1; vertical++)
        {
            if (vertical >= i + 1 - horizontal && vertical <= i - 1 + horizontal)
            {
                if (horizontal - 1 >= k && l)
                {
                    k++;
                    printf("%d", k);
                }
                else
                {
                    k--;
                    printf("%d", k);
                    l = 0;
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        k = 0;
        l = 1;
    }
    return 0;
}