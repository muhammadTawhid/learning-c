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

    bool is_unit = true;
    bool diagonal_value = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    diagonal_value = false;
                }
            }
            if (i != j)
            {
                if (a[i][j] != 0)
                {
                    is_unit = false;
                }
            }
        }
    }

    if (is_unit == true && diagonal_value == true)
    {
        printf("a unit matrix");
    }
    else
    {
        printf("not a unit matrix");
    }

    return 0;
}