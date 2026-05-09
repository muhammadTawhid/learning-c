#include <stdio.h>
#include <string.h>

int main()
{
    char a[110], b[110];
    scanf("%s %s", &a, &b);

    //string concat manual
    // int len_a = strlen(a);
    // int len_b = strlen(b);
    // for (int i = 0; i <= len_b; i++)
    // {
    //     a[i + len_a] = b[i];
    // }

    strcat(b, a);

    printf("%s %s %d %d", a, b, strlen(a), a[5]);

    return 0;
}