//Matrix Multiplication
#include <stdio.h>
#include <stdlib.h>
int **multiply(int m, int n, int a[m][n], int b[n][m]);
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    if (m <= 0 || n <= 0)
    {
        printf("INVALID INPUT");
        return 0;
    }
    int a[m][n];
    int b[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int **c = multiply(m, n, a, b);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j == m - 1)
            {
                printf("%d", c[i][j]);
            }
            else
            {
                printf("%d ", c[i][j]);
            }
        }
        printf("\n");
    }
    for (int i = 0; i < m; i++)
    {
        free(c[i]);
    }
    free(c);
}
int **multiply(int m, int n, int a[m][n], int b[n][m])
{
    int **c;
    c = malloc((m) * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        c[i] = malloc((n) * sizeof(int));
    }
    int rw = 0, clm = 0, sum = 0, r1, c1;
    while (rw < m)
    {
        c1 = 0;
        while (c1 < m)
        {
            r1=0,clm = 0;
            while (r1 < n)
            {
                sum += a[rw][clm] * b[r1][c1];
                r1++;
                clm++;
            }
            c[rw][c1] = sum;
            sum = 0;
            c1++;
        }
        rw++;
    }
    return c;
}












