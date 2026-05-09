#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    int capital = 0, small = 0, digit = 0;
    char s[10000];
    for (int k = 0; k < t; k++)
    {
        scanf("%s", s);
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small++;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d", capital, small, digit);
        capital = 0;
        small = 0;
        digit = 0;
        printf("\n");
    }

    return 0;
}