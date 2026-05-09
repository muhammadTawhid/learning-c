#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int a_divide = 0;
    int b_divide = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            a_divide++;
            b_divide--;
        }

        else if (a[i] % 2 == 0)
        {
            a_divide++;
        }

        if (a[i] % 3 == 0)
        {
            b_divide++;
        }
    }

    printf("%d %d", a_divide, b_divide);
    return 0;
}