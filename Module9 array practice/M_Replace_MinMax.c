#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int max = 0, min = INT_MAX, maxI = 0, minI = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
            maxI = i;
        }
        if (min > a[i])
        {
            min = a[i];
            minI = i;
        }
    }
    a[minI] = max;
    a[maxI] = min;

    for (int i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }

    return 0;
}