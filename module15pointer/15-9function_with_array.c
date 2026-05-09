#include <stdio.h>
void fun(int a[], int n)
{
    a[2] = 303;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    fun(a, n);

    return 0;
}