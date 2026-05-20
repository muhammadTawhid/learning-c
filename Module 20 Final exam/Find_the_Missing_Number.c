#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[4];

    for (int i = 0; i < n; i++)
    {

        for (int i = 0; i < 4; i++)
        {
            scanf("%lld", &a[i]);
        }

        long long int multiplication_abc = 1;
        long long int m = a[0];
        for (int i = 1; i < 4; i++)
        {
            multiplication_abc *= a[i];
        }

        if (m % multiplication_abc != 0)
        {
            printf("-1");
        }
        else
        {
            if (m % multiplication_abc == 0 && m / multiplication_abc == 0)
            {
                printf("0");
            }
            else if (m % multiplication_abc == 0)
            {
                printf("%lld", m / multiplication_abc);
            }
        }

        printf("\n");
    }

    return 0;
}