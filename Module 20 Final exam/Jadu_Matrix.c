#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    bool is_jadu = true;
    int secondary_diagonal = r - 1;

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j || i + j == secondary_diagonal)
                {
                    if (a[i][j] != 1)
                    {
                        is_jadu = false;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        is_jadu = false;
                    }
                }
            }
        }
        if (is_jadu == true)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}