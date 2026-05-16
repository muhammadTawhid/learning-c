#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("%lld", sum);

    return 0;
}