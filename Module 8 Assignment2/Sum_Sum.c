#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sumPos = 0;
    int sumNeg = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            sumPos += a[i];
        }
        else
        {
            sumNeg += a[i];
        }
    }

    printf("%d ", sumPos);
    printf("%d ", sumNeg);

    return 0;
}