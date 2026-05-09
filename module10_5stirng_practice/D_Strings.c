// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[10], b[10], c[10];
//     scanf("%s %s", &a, &b);

//     int lenA = strlen(a);
//     int lenB = strlen(b);
//     printf("%d %d\n", lenA, lenB);
//     char ab[lenA + lenB - 1];
//     for (int i = 0; i < lenA + lenB-1; i++)
//     {
//         ab[i] = a[i];
//     }
//     for (int i = 0; i <= lenB; i++)
//     {
//         ab[i+lenA] = b[i];
//     }
//     printf("%s\n", ab);
//     // printf("%c\n", ab[5]);
//     c[0] = a[0];
//     a[0] = b[0];
//     b[0] = c[0];

//     printf("%s %s", a, b);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char a[10], b[10], c[10];
    scanf("%s %s", &a, &b);
    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d %d\n", len_a, len_b);
    printf("%s%s\n", a, b);

    c[0] = a[0];
    a[0] = b[0];
    b[0] = c[0];
    printf("%s %s", a, b);

    return 0;
}