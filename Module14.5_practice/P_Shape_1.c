#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= star; i++)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }

    return 0;
}