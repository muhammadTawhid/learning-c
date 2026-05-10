#include <stdio.h>        
#include <string.h>        

int main()
{
    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    char a[1000];
    scanf("%d", &a);
    int len = strlen(a);

    // int i=0, j=n-1;
    int flag = 0;

    // printf("%d %d\n",i, j); 
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {   
        if (a[i] != a[j])
        {
            printf("NO");
            flag = 1;
            break;
        }
    }

    // while (i < j)
    // {
    //     if (a[i] != a[j])
    //     {
    //         printf("NO");
    //         flag = 1;
    //         break;
    //     }
    //     i++;
    //     j--;
    // }
    if (flag == 0)
    {
        printf("YES");
    }

    return 0;
}