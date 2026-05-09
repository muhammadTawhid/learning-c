#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", &s);
    int len = strlen(s);
    int flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != s[len - 1])
        {
            printf("NO");
            flag = 0;
            break;
        }
        len--;
    }
    if (flag == 1)
    {
        printf("YES");
    }

    return 0;
}