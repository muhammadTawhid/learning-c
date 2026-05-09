#include <stdio.h>
void total_distinct_num()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int distinct_count = n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                distinct_count--;
            }
        }
    }
    if (distinct_count < 0)
    {
        distinct_count = 1;
    }

    printf("%d", distinct_count);
}

int main()
{
    total_distinct_num();
    return 0;
}