#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < star; k++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        space--;
        star += 2;
        printf("\n");
    }

    space += 1;
    star -= 4;

    for (int i = n - 2; i >= 0; i--)
    {

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < star; k++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        space++;
        star -= 2;
        printf("\n");
    }

    return 0;
}
