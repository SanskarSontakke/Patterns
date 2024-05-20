#include <stdio.h>

int main()
{
    int i;
    int k = 'A';

    printf("Enter i : ");
    scanf("%d", &i);

    for (int horizontal = 1; horizontal <= i; horizontal++)
    {
        for (int vertical = 1; vertical <= (2 * i) - 1; vertical++)
        {
            if (vertical <= i + 1 - horizontal || vertical >= i - 1 + horizontal)
            {
                if (vertical < i)
                {
                    printf("%c", k);
                    k++;
                }
                else
                {
                    printf("%c", k);
                    k--;
                }
            }
            else
            {
                printf(" ");
                if (vertical == i)
                {
                    k--;
                }
            }
        }
        printf("\n");
        k = 'A';
    }
    return 0;
}