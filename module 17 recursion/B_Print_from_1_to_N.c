#include <stdio.h>

void print_num(int n, int i)
{
    printf("%d\n", i);
    if (i == n)
    {
        return;
    }
    print_num(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_num(n, 1);
    return 0;
}