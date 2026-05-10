#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int m1, m2, m3, d;

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        m3 = m1 + m2;
        int day = (d * m1) / m3;
        int few_days = d - day;
        printf("%d\n", few_days);
    }

    return 0;
}