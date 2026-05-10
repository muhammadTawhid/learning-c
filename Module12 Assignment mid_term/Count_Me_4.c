#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000];
    scanf("%s", s);
    int len = strlen(s);

    char alphabets[27];
    for (int i = 0, k = 'a'; i <= 1, k <= 'z'; i++, k++)
    {
        alphabets[i] = k;
    }

    int count[26] = {0};
    for (int i = 0; i < len; i++)
    {
        int index = s[i] - 97;
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c - %d\n", alphabets[i], count[i]);
        }
    }

    return 0;
}