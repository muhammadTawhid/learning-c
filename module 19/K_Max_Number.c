#include <stdio.h>
#include <limits.h>

int max_num(int a[], int n, int i, int max)
{
    if (i == n)
    {
        return max;
    }

    if (a[i] > max)
    {
        max = a[i];
    }
    max_num(a, n, i + 1, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_value = max_num(a, n, 0, max);
    printf("%d", max_num(a, n, 0, max));

    return 0;
}