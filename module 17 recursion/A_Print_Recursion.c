#include <stdio.h>

void print_text(int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("I love Recursion\n");
    print_text(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    print_text(n, 0);
    return 0;
}