#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
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
        star += 2;
        space--;
        printf("\n");
    }

    int reverse_star = n + 3;
    int reverse_space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= reverse_space; i++)
        {
            printf(" ");
        }

        for (int i = 1; i <= reverse_star; i++)
        {
            printf("*");
        }
        reverse_star -= 2;
        reverse_space++;
        printf("\n");
    }

    return 0;
}