#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int r = n, c = n;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int primary_sum = 0;
    int secondary_sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                primary_sum += a[i][j];
            }

            if (i + j == n-1)
            {
                secondary_sum += a[i][j];
            }
        }
    }

    printf("%d", abs(primary_sum - secondary_sum));

    return 0;
}