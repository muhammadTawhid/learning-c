#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int min = INT_MAX;
    int index = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < min)
        {
            min = a[i];
            index = i;
        }
    }

    printf("%d %d", min, index);

    return 0;
}