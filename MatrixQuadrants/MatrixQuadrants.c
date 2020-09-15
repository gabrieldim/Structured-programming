/*
One element of the matrix divides the matrix into 4 quadrants (shown in the picture).
The element that divides the matrix belongs to the fourth quadrant (-5 in the example in the picture).
A matrix with dimensions NxM (1 <= N, M <100) is entered from the standard input. 
Then two numbers are entered that represent indexes of one element of the matrix.
Find the sums of each of the quadrants and print them on a standard output. 
The amount for the first quadrant, then for the second, 
then the third and finally for the fourth is printed.
If a quadrant cannot be created, then 0 should be printed for the sum of that quadrant.

Test case:
Input:
3 3
1 2 3
4 5 6
7 8 9
1 1
Output:
5 1 11 28



*/

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