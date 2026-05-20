#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);

    int n = (input + 11) / 2;
    
    int star = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }

        for (int i = 1; i <= star; i++)
        {
            printf("*");
        }

        space--;
        star += 2;
        printf("\n");
    }

    int r = 5, c = input;
    for (int i = 0; i < r; i++)
    {
        for (int i = 0; i < r; i++)
        {
            printf(" ");
        }

        for (int j = 0; j < c; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}