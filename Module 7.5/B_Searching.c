#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int fn;
    scanf("%d", &fn);
    int trigger = 0;

    for (int i = 0; i < n; i++)
    {
        if (fn != a)
        {
            trigger = 1; 
        }
        
    }

    for (int i = 0; i < n; i++)
    {
         if (fn == a[i])
        {
            printf(" %d", i);
            trigger = 0;
            break;
        }

    }

    if (trigger == 1)
    {
        printf("-1"); 
    }

    return 0;
}