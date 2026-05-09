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

    int i=0, j=n-1;
    int flag = 0;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            printf("NO"); 
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if (flag == 0)
    {
        printf("YES"); 
    }
    
    
    return 0;
}