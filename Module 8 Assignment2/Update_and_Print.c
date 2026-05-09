#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    for (int i = 0; i < n; i++)
    {
        if (i == x)
        {
            a[i] = v;
        }
    }

    for (int i = n - 1; 0 <= i; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}