
#include <stdio.h>
int main()
{

    int i, j, n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int r, b, c, d;
    r = b = c = d = 0;
    int x, y;
    scanf("%d%d", &x, &y);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < x && j >= y)
            {
                r += a[i][j];
            }
            if (i < x && j < y)
            {
                b += a[i][j];
            }
            if (i >= x && j < y)
            {
                c += a[i][j];
            }
            if (i >= x && j >= y)
            {
                d += a[i][j];
            }
        }
    }
    printf("%d %d %d %d", r, b, c, d);
}