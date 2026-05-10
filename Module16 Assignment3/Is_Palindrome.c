#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int len = strlen(s);
    int flag = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {

        if (s[i] != s[j])
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    char s[1000];
    scanf("%s", &s);
    int flag = is_palindrome(s);
    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}