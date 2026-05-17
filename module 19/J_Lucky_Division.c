#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int is_lucky = true;

    if (n % 4 == 0 || n % 7 == 0)
    {
        is_lucky = true;
    }

    else
    {
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 4 && digit != 7)
            {
                is_lucky = false;
            }
            n = n / 10;
        }
    }

    if (is_lucky == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}