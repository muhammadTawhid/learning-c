#include <stdio.h>

long long int summation(long long int a[], int n, int i, long long int total)
{
    if (i == n)
    {
        return total;
    }

    total = total + a[i];

    return summation(a, n, i + 1, total);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int a[n];
    long long int total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    printf("%lld", summation(a, n, 0, total));

    return 0;
}