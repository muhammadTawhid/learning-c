#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("%d", a[3]);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {   
            int temp = a[i];
                // printf("%d %d\n", i, i+1); 
                a[i] = a[i+1];
                a[i+1] = temp;

            // printf("%d %d\n",i, a[n]);
            for (int j = i+1; j < n; j++)
            {   
                // int temp = a[i];
                // printf("%d %d\n", i, j); 
                // a[i] = a[j];
                // a[j] = temp;

                // int temp = a[j];
                // a[j] = a[i];
                // a[i] = temp;
            }
        }
        // printf("%d ", a[i]);

    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}