#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num = 1;
    int space = n;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i < space; i++)
        {
            printf(" ");
        }
        
        for (int i = num; i >= 1; i--)
        {
            printf("%d", i);
        }
        num++;
        space--;
        printf("\n");
    }

    return 0;
}