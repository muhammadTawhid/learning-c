#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    scanf("%s", &s);
    int len = strlen(s);
    int consonants = 0;
    int vowels = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowels++;
            consonants = len - vowels;
        }
    }
    printf("%d", consonants);

    return 0;
}