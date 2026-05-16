#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 20;
    int count = 0;
    bool is_zero = false;

    while (n % 2 == 0)
    {
        n = n / 2;
        count++;
    }

    printf("%d", count);

    return 0;
}