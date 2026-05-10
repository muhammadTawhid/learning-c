#include <stdio.h>

int count_before_one(int n)
{
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", count_before_one(n));
    return 0;
}