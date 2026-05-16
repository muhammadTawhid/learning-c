#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min_count = __INT_MAX__;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (a[i] % 2 == 0)
        {
            a[i] = a[i] / 2;
            count++;
        }

        if (count < min_count)
        {
            min_count = count;
        }
    }

    printf("%d", min_count);

    return 0;
}